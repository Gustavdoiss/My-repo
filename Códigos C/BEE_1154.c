#include <stdio.h>
 
int main() {
 
    int x, cont = 0, soma = 0;
    scanf("%d", &x);

    while(x > 0) {
        cont++;
        soma += x;
        scanf("%d", &x);
    }

    printf("%.2f\n", (float)soma/cont);
    return 0;
}