#include <stdio.h>

int main() {
    
    int n, x, cont = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &x);
        int j = 0;
        while (cont != x) {
            cont += j;
            j++;
        }
    }

    printf("asjdh");
    return 0;
}
