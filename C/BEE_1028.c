#include <stdio.h>

int MDC(int a, int b) {
    if (b == 0) return a;
    return MDC(b, a % b);
}
int main() {
    int n, F1, F2;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &F1, &F2);
        printf("%d\n", MDC(F1, F2));
    }
}