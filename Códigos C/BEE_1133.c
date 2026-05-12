#include <stdio.h>
 
int main() {
 
    int x, y, temp;
    scanf("%d\n%d", &x, &y);
    temp = x;
    x = x > y ? x : y;
    y = y > temp ? temp : y;
    
    for (int i = y+1; i <= x-1; i++) {
        if (i%5 == 2 || i%5 == 3) { printf("%d\n", i); }
    }
    return 0;
}