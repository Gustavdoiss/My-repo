#include <stdio.h>

int main() {

    float soma = 0;
    int a = 1, b = 1;

    while (a <= 39) {
        soma += (float)a/b;
        b *= 2;
        a += 2;
    }
    
    printf("%.2f\n", soma);
    return 0;
}