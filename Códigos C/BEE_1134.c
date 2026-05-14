#include <stdio.h>

int main() {

    int x, alcool = 0, gas = 0, diesel = 0;

    do {
        scanf("%d", &x);
        switch (x) {
            case 1:
                alcool++;
                break;
            case 2:
                gas++;
                break;
            case 3:
                diesel++;
                break;
            default:
                continue;
        }

    }while (x != 4);

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gas, diesel);
    return 0;
}