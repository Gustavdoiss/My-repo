#include <stdio.h>

int main() {
    for (int i = 0; i <= 10; i++) {
        float fi = i * 0.2;
        for (int j = 1; j <= 3; j++) {
            if (i % 5 == 0)
                printf("I=%d J=%d\n", (int)fi, (int)(fi + j));
            else
                printf("I=%.1f J=%.1f\n", fi, fi + j);
        }
    }
    return 0;
}