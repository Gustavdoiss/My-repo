#include <stdio.h>
 
int main() {
 
    int x[20], n[20];
    
    for (int i = 0; i <= 19; i++) {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i <= 19; i++) {
        n[i] = x[19-i];
        printf("N[%d] = %d\n", i, n[i]);
    }
    return 0;
}