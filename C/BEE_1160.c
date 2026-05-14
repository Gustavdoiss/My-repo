#include <stdio.h>

int main() {

    int t, pa, pb, anos, temp;
    double g1, g2;
    int sec = 0;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        anos = 0;
        temp = pa;
        while (temp < pb) {
            if (anos > 100) {
                sec = 1;
                break;
            }else {
                temp *= ((g1/100) + 1);
                anos++;
            }
        }
        if (sec == 1) { printf("Mais de 1 seculo.\n"); }
        else     { printf("%d anos.\n", anos);    }
    }
    return 0;
}