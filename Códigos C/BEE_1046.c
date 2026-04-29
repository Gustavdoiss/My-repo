#include <stdio.h>

int main() {
    int ini, fim, dur;
    scanf("%d %d", &ini, &fim);

    dur = fim - ini;
    if (dur <= 0) dur += 24;

    printf("O JOGO DUROU %d HORA(S)\n", dur);

    return 0;
}