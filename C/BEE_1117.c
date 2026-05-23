#include <stdio.h>
<<<<<<< HEAD:C/BEE_1117.c
 
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
    
=======

int main() {

    int x;
    float soma;

    for (int i = 0; i < 2; i++){
        scanf("%d", &x);

        if (x < 0 || x > 10) {
            printf("nota invalida\n");

            while (x < 0 || x > 10) {
                scanf("%d", &x);
            }
        }

        soma += x;
    }
    printf("media = %d", (float) soma/2);

>>>>>>> 7d98eeb (nada a ver):Códigos C/BEE_1117.c
    return 0;
}