#include <stdio.h>

int main() {

    int t, pa, pb, anos;
    double g1, g2, temp;
    int sec = 0;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        anos = 0;
        temp = pa;

        while (temp <= pb && anos <= 100) {
            anos++;
            temp *= ((g1/100) + 1);
            pb   *= ((g2/100) + 1);
        }

        if (anos > 100)    { printf("Mais de 1 seculo.\n"); }
        else               { printf("%d anos.\n", anos);    }
        }

    return 0;
}