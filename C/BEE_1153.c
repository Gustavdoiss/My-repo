#include <stdio.h>
 
int main() {
 
    int n, mult = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        mult *= i;
    }

    printf("%d\n", mult);
    return 0;
}