#include <stdio.h>

unsigned long long memo[61];

unsigned long long fib(int n) {
    if (n <= 1) return n;
    if (memo[n] != 0) return memo[n];
    memo[n] = fib(n - 1) + fib(n - 2);
    return memo[n];
}

int main() {
    int x, t;

    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &t);
        printf("Fib(%d) = %llu\n", t, fib(t));
    }
    return 0;
}