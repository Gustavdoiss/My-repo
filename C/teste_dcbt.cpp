  /*
  * Captive Portal Decabot
  * Daniel Chagas, Nicole Akemi Takeda, Cauan Oliveira, Paulo Roberto Gomes
  *
  * Robô cria uma rede wifi com captive portal que exibe botões de controle
  * remoto que controlam os servo motores ligados às portas D0 (motor direito)
  * e D6 (motor esquerdo). 
  *
  * To use:
  * - Access the Wi-Fi network 'MeuDecabot' with a device such as smartphone,
  *   tablet or computer, and click on the login message. 
  * - You must see a page with a title and buttons who can control the movement
  * 
  * Hardware:
  * Wemos D1 Mini - https://www.wemos.cc/en/latest/d1/index.html
  * Matrix Led Shield - https://github.com/wemos/WEMOS_Matrix_LED_Shield_Arduino_Library
  * Decabot Mini Shield
  * 
  * PORTS                             _____________
  *                                  /             \
  *                             RST |*  ---------  *| TX 
  *           battery ---------- A0 |* |         | *| RX
  *         SERVO esq --GPIO16-- D0 |* |  ESP    | *| D1 ---I2C--- SCL
  *    led matrix CLK ---------- D5 |* |  8266   | *| D2 ---I2C--- SDA
  *         SERVO dir --GPIO12 - D6 |* |         | *| D3 --GPIO0-- SERVO
  *    led matrix DIN ---------- D7 |* |         | *| D4 --GPIO2
  *            buzzer --GPIO15-- D8 |*  ---------  *| GND
  *                             3V3 |*             *| 5V
  *                                  \              |
  *                            reset  |      D1mini |
  *                                    \___________/
  */


  #include <ESP8266WiFi.h>
  #include <ESPAsyncTCP.h>        //tested on 1.2.4 from https://github.com/dvarrel/ESPAsyncTCP
  #include <ESPAsyncWebServer.h>  //tested on https://github.com/lacamera/ESPAsyncWebServer
  #include <DNSServer.h>
  #include <Servo.h>
  #include <Adafruit_GFX.h>       // tested on 1.11.10
  #include <WEMOS_Matrix_GFX.h>   // tested on 1.4.0iu332
  #include "index_html.h"
  #define lerVolt A0
  #define buzzer D8

  MLED matrix(7);

  int slowSpeed = 40; //number between 1 and 180 max.
  int fastSpeed = 60; //number between 1 and 180 max.

  int calibration = 0; //number between -50 and 50 to balance motors

  int lerVolt;
  int battery;

  int lpos = 1;
  int rpos = 6; 
  int aleat = 5;

  bool awake = false;

  String serialAtual = "";

  const char *ssid = "Nibbles";
  const char *password = "";
  Servo servo0;
  Servo servo6;


  const int decabotMusic[4][3]{ { 494, 2, 3 }, { 554, 2, 4 }, { 440, 2, 5 }, { 880, 1, 6 } };
  static const uint8_t PROGMEM decabotLogo[4][5] = {{0b11001110,0b10101000,0b10101100,0b10101000,0b11001110},{0b00110010,0b01000101,0b01000111,0b01000101,0b00110101},{0b11000100,0b10101010,0b11001010,0b10101010,0b11000100},{0b01110100,0b00100100,0b00100100,0b00100000,0b00100100}};


  DNSServer dnsServer;
  const byte DNS_PORT = 53;

  AsyncWebServer server(80);

  const int LED_PIN = LED_BUILTIN;
  bool ledState = false;

  void notFound(AsyncWebServerRequest *request) {
    request->redirect("/");
  }

  int neutralLeft  = 93;
  int neutralRight = 93;

  void printWeb(String texto) {
    serialAtual = texto;
  }

  void motorLeft(int pot) {
    if (pot == 0) {
      servo0.write(neutralLeft);
    } else {
      int vel = neutralLeft + map(pot, -100, 100, fastSpeed, -fastSpeed);
      servo0.write(vel);
    }
  }

  void motorRight(int pot) {
    if (pot == 0) {
      servo6.write(neutralRight);
    } else {
      int vel = neutralRight - map(pot, -100, 100, fastSpeed, -fastSpeed);
      servo6.write(vel);
    }
  }

  void setup() {
    Serial.begin(115200);
    Serial.println();
    Serial.println();
    Serial.println("Decabot");
    pinMode(buzzer, OUTPUT);
    matrix.setRotation(2);
    servo0.attach(D0);
    servo6.attach(D6);
    Serial.begin(115200);

    pinMode(LED_PIN, OUTPUT);
    digitalWrite(LED_PIN, HIGH); // LED off (ativo em LOW)
    ledState = false;

    WiFi.mode(WIFI_AP);
    WiFi.softAP(ssid, password);
    IPAddress myIP = WiFi.softAPIP();
    Serial.print("AP IP address: ");
    Serial.println(myIP);

    dnsServer.start(DNS_PORT, "*", myIP);

    // Página raiz (cativa)
    server.on("/", HTTP_GET, [myIP](AsyncWebServerRequest *request) {
      String ipStr = myIP.toString();
      request->send(200, "text/html", html);
    });

    // Prints no painel de Debug
    server.on("/serial", HTTP_GET, [](AsyncWebServerRequest *request) {
      request->send(200, "text/plain", serialAtual);
      serialAtual = "";
    });

    // Porcentagem da bateria na web
    server.on("/bateria", HTTP_GET, [](AsyncWebServerRequest *resquest) {
      request->send(200, "text/plain", serialAtual);

    })

    // Comandos: Front / Left / Right / Back / Stop
    server.on("/led", HTTP_GET, [](AsyncWebServerRequest *request) {
      if (request->hasParam("state")) {
        String state = request->getParam("state")->value();
        printWeb(state);

        if (state == "Front") {
          digitalWrite(LED_PIN, LOW);
          ledState = true;
          motorLeft(100);
          motorRight(100);
        } else if (state == "Left") {
          digitalWrite(LED_PIN, LOW);
          ledState = true;
          motorLeft(50);
          motorRight(-50);

        } else if (state == "Right") {
          digitalWrite(LED_PIN, LOW);
          ledState = true;
          motorLeft(-50);
          motorRight(50);

        } else if (state == "Back") {
          digitalWrite(LED_PIN, LOW);
          ledState = true;
          motorLeft(-50);
          motorRight(-50);

        } else if (state == "Stop") {
          digitalWrite(LED_PIN, HIGH);
          ledState = false;
          motorLeft(0);
          motorRight(0);

        } else {
          request->send(400, "text/plain", "Invalid state");
          return;
        }

        request->send(200, "text/plain", ledState ? "ON" : "OFF");
      } else {
        request->send(400, "text/plain", "Missing parameter");
      }
    });

    server.on("/status", HTTP_GET, [](AsyncWebServerRequest *request) {
      request->send(200, "text/plain", ledState ? "ON" : "OFF");
    });

    server.onNotFound(notFound);

    // Calibração do Decabot
    server.on("/calibrar", HTTP_GET, [](AsyncWebServerRequest *request) {
      if (request->hasParam("val")) {
          String valorString = request->getParam("val")->value();
          calibration = valorString.toInt();
          neutralLeft  = 90 + calibration;
          neutralRight = 90 - calibration;
          request->send(200, "text/plain", "Calibrado com sucesso!");
      } else {
          request->send(400, "text/plain", "Parâmetro ausente");
      }
  });
    
    //Acordar e dormir
    server.on("/acordar", HTTP_GET, [](AsyncWebServerRequest *request) {
      if (request->hasParam("situacao")) {
          String situString = request->getParam("situacao")->value();
          if(situString == "levanta"){
            awake = true;
            request->send(200, "text/plain", "Decabot acordado!");
          } else if(situString == "apaga"){
            awake = false;
            request->send(200, "text/plain", "Decabot dormindo!");
          } else {
            request->send(400, "text/plain", "Valor inválido");
          }
      }
    });
    
    server.begin();
    for (int i = 0; i < 4; i++) {
      matrix.clear();
      matrix.drawBitmap(0, 2, decabotLogo[i] , 8, 5, LED_ON);
      matrix.writeDisplay();
      tone(buzzer, decabotMusic[i][0], decabotMusic[i][1] * 200);
      delay(decabotMusic[i][1] * 200);
      noTone(buzzer);
    }
    delay(500);
    matrix.clear();
  }

  void loop() {
    dnsServer.processNextRequest();

    //Ler a bateria atual do arduino.
    lerVolt = analogRead(A0);
    battery = map(lerVolt, 683, 1023, 0, 100);
    battery = constrain(porcentagem, 0, 100);

    if(awake){
      // animação dos olhos + buzzer (mantida)
      matrix.clear();
      matrix.drawLine(lpos, 2, lpos, 7, LED_ON);
      matrix.drawLine(rpos, 2, rpos, 7, LED_ON);
      matrix.writeDisplay();
      delay(1000);

      // efeito de piscar
      for (int j = 0; j < random(3); j++) {
        for (int i = 2; i < 7; i++) {
          matrix.clear();
          matrix.drawLine(lpos, i, lpos, 7, LED_ON);
          matrix.drawLine(rpos, i, rpos, 7, LED_ON);
          matrix.writeDisplay();
          digitalWrite(buzzer, HIGH);
          delay(15);
          digitalWrite(buzzer, LOW);
          delay(15);
        }
        for (int i = 7; i > 2; i--) {
          matrix.clear();
          matrix.drawLine(lpos, i, lpos, 7, LED_ON);
          matrix.drawLine(rpos, i, rpos, 7, LED_ON);
          matrix.writeDisplay();
          digitalWrite(buzzer, HIGH);
          delay(15);
          digitalWrite(buzzer, LOW);
          delay(15);
        }
      }
    
      // olhar para os lados
      aleat = random(10);
      if (aleat < 2) {
        lpos = 0;
        rpos = 5;
      } else if (aleat > 7) {
        lpos = 2;
        rpos = 7;
        delay(15);
      } else {
        lpos = 1;
        rpos = 6;
        delay(15);
      }
    } else {
      matrix.clear();
      matrix.drawLine(0, 7, 2, 7, LED_ON);
      matrix.drawLine(5, 7, 7, 7, LED_ON);
      matrix.writeDisplay();
    }
  }