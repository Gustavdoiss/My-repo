#include <stdio.h>
 
int main() {
 
    int x, temp;

    scanf("%d", &x);
    while (x != 0) {
        printf("1");
        temp = 2;
        for (int j = 1; j < x; j++) {
            printf(" %d", temp);
            temp++;
        }
        printf("\n");
        scanf("%d", &x);
    }
    return 0;
}