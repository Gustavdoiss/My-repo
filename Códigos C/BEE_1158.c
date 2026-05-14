#include <stdio.h>
 
int main() {
 
    int n, x, y, cont, soma;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        cont = 0;
        soma = 0;
        while (cont < y) {
            if (x%2 != 0) { cont++; soma += x; }
            x++;
        }
        printf("%d\n", soma);
    }
    return 0;
}