#include <stdio.h>
 
int main() {
 
    int a, n, x, soma = 0;
    scanf("%d %d", &a, &n);

    while (n <= 0) { scanf("%d", &n); }

    for (int i = 0; i <= n-1; i++) {
        x = a + i;
        soma += x;
    }
    printf("%d\n", soma);
    return 0;
}