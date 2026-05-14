#include <stdio.h>

int main() {
    float nota, soma;
    int validas, x;

    do {
        soma = 0;
        validas = 0;

        while (validas < 2) {
            scanf("%f", &nota);
            if (nota < 0 || nota > 10) {
                printf("nota invalida\n");
            } else {
                soma += nota;
                validas++;
            }
        }

        printf("media = %.2f\n", soma / 2);

        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &x);
        } while (x < 1 || x > 2);

    } while (x == 1);

    return 0;
}