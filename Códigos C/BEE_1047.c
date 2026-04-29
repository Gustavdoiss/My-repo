#include <stdio.h>

int durH, durM;
int duracao(int a, int b, int c, int d) {
    durH = c - a;
    durM = d - b;
    if (durH == 0 && durM == 0) {
        durH += 24;
    }else if (durM < 0) {
        durM += 60;
        if (durH > 0) {
            durH -= 1;
        }else {
            durH += 23;
        }
    }else if (durM > 0) {
        if (durH < 0) durH += 24;
    }
}

int main() {
    int iniH, fimH,iniM, fimM;
    scanf("%d %d %d %d", &iniH, &iniM, &fimH, &fimM);
    duracao(iniH, iniM, fimH, fimM);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", durH, durM);

    return 0;
}