#include <stdio.h>

int main() {
    int d1, h1, m1, s1;
    int d2, h2, m2, s2;

    scanf("Dia %d %d : %d : %d Dia %d %d : %d : %d",
          &d1, &h1, &m1, &s1, &d2, &h2, &m2, &s2);

    int ini = ((d1 * 24 + h1) * 60 + m1) * 60 + s1;
    int fim = ((d2 * 24 + h2) * 60 + m2) * 60 + s2;

    int dur = fim - ini;

    int dias    = dur / 86400;
    int horas   = (dur % 86400) / 3600;
    int minutos = (dur % 3600) / 60;
    int segs    = dur % 60;

    printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", dias, horas, minutos, segs);

    return 0;
}