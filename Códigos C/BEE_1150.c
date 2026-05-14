#include <stdio.h>

int main() {

    int x, z, cont = 0, soma = 0;
    scanf("%d\n%d", &x, &z);

    while (z <= x) { scanf("%d", &z); }
    for (int i = x; soma <= z; i++) { soma += i; cont++; }

    printf("%d\n", cont);
    return 0;
}