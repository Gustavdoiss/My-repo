#include <stdio.h>

int main() {

    int x, cont, soma;
    scanf("%d", &x);

    while (x != 0) {
        cont = 0;
        soma = 0;
        for (int i = x; cont < 5; i++) {
            if (x%2 == 0) { cont++; soma += x; }
            x++;
        }
        printf("%d\n", soma);
        scanf("%d", &x);
    }
    return 0;
}