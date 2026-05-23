#include <stdio.h>
 
int main() {
 
    int n;
    float x, y, z;
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%f %f %f", &x, &y, &z);
        float media = (float) (x*2+y*3+z*5)/10;
        printf("%.1f\n", media);
    }
    return 0;
}