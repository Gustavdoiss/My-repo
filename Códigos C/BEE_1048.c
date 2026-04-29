#include <stdio.h>

int main() {
    double sal, perc;
    scanf("%lf", &sal);

    if (sal <= 400.00)        perc = 15;
    else if (sal <= 800.00)   perc = 12;
    else if (sal <= 1200.00)  perc = 10;
    else if (sal <= 2000.00)  perc = 7;
    else                      perc = 4;

    double reajuste = sal * perc / 100;

    printf("Novo salario: %.2f\n", sal + reajuste);
    printf("Reajuste ganho: %.2f\n", reajuste);
    printf("Em percentual: %.0f %%\n", perc);

    return 0;
}