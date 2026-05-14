#include <stdio.h>

int main() {
 
    int x, y, f, temp;
    char str[20] = "";
    scanf("%d %d", &x, &y);
    f = y - x + 1;
    
    for (int i = 1; i <= f; i += x) {
        printf("%d", i);
        temp = i+1;
        for (int j = 1; j < x; j++) {
            printf(" %d", temp);
            temp++;
        }
        printf("\n");
    }
    return 0;
}