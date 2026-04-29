#include <stdio.h>

int main() {
    int iniH, iniM, fimH, fimM;
    scanf("%d %d %d %d", &iniH, &iniM, &fimH, &fimM);

    int ini = iniH * 60 + iniM;
    int fim = fimH * 60 + fimM;

    int dur = fim - ini;
    if (dur <= 0) dur += 24 * 60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dur / 60, dur % 60);

    return 0;
}