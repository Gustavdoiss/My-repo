#include <stdio.h>
 
int main() {
 
    int x, cont = 0;
    float soma;
    
    while (cont < 2) {
        scanf("%d", &x);
        if (x < 0 || x > 10) {
            printf("Nota invalida\n");
        }else {
            soma += x;
            cont++;
        }
    }
    
    printf("media = %d", (float) soma/2);
    
    return 0;
}