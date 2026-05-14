#include <stdio.h>
 
int main() {
 
    int x, a, b;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++) {
        a = i*i;
        b = i*i*i;
        printf("%d %d %d\n", i, a, b);
        printf("%d %d %d\n", i, a+1, b+1);
    }
    return 0;
}