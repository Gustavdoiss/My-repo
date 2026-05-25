#include <stdio.h>

int main() {

    int x;
    int val = 0;

    while (val == 0) {
        scanf("%d", &x);
        if(x == 2002)   val = 1;
        else            printf("Senha Invalida\n");
    }
    printf("Acesso Permitido");

    return 0;
}