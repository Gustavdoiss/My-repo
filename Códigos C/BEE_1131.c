#include <stdio.h>

int main() {

    int i, g, e = 0, grenal, cont = 0;
    int x, y;
    do {
        scanf("%d %d", &x, &y);
        if (x > y) {
            i++;
        }else if (x < y) {
            g++;
        }else { e++; }
        cont++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &grenal);
    }while (grenal != 2);

        printf("%d grenais\n", cont);
    printf("Inter:%d\n", i);
    printf("Gremio:%d\n", g);
    printf("Empates:%d\n", e);
    if (i > g) {
        printf("Inter venceu mais\n");
    }else if (g > i) {
        printf("Gremio venceu mais\n");
    }else {
        printf("Nao houve vencedor\n");
    }
    return 0;
}