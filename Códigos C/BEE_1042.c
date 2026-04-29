#include <stdio.h>

int orden(int x, int y, int z) {
    if (x > y && x> z) {
        if (y > z) {
            printf("%d\n%d\n%d\n", z, y, x);
        }else {
            printf("%d\n%d\n%d\n", y, z, x);
        }
    }else if (y > x && y > z) {
        if (x > z) {
            printf("%d\n%d\n%d\n", z, x, y);
        }else {
            printf("%d\n%d\n%d\n", x, z, y);
        }
    }else if (z > x && z > y) {
        if (x > y) {
            printf("%d\n%d\n%d\n", y, x, z);
        }else {
            printf("%d\n%d\n%d\n", x, y, z);
        }
    }
    
}

int main() {
 
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    orden(a, b, c);
    printf("\n");
    printf("%d\n%d\n%d\n", a, b, c);
    return 0;
}