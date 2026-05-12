#include <stdio.h>
 
int main() {
 
    int x, y, temp, soma = 0;
    scanf("%d\n%d", &x, &y);
    temp = x;
    x = x > y ? x : y;
    y = y > temp ? temp : y;
    
    for (int i = y; i <= x; i++) {
        if (i%13 != 0) { soma += i; }
    }
    printf("%d\n", soma);
    return 0;
}