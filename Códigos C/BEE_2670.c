#include <stdio.h>

int main() {

    int a, b , c, w, x, y, z;
    scanf("%d\n%d\n%d", &a, &b, &c);
    x = (b * 2 + c * 4);
    y = (a + c) * 2;
    z = (b * 2 + a * 4);
    if (x <= y && x <= z) printf("%d\n", x);
    else if (y <= x && y <= z) printf("%d\n", y);
    else if (z <= x && z <= y) printf("%d\n", z);


    return 0;
}