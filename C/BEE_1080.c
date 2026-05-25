#include <stdio.h>
 
int main() {
 
    int x[2] = {0, 0};
    
    for (int i = 1; i <= 100; i++){
        int temp;
        scanf("%d", &temp);
        if (temp > x[0]) {
            x[0] = temp;
            x[1] = i;
        }
    }
    
    printf("%d\n%d\n", x[0], x[1]);
    return 0;
}