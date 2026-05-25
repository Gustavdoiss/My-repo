#include <stdio.h>

int main() {
    int x, par[5], parI = 0, imp[5], impI = 0;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &x);
        if (x%2 == 0) {
            par[parI] = x;
            parI++;
        }else if (x%2 != 0) {
            imp[impI] = x;
            impI++;
        }
        if (parI == 5) {
            parI = 0;
            for (int j = 0; j < 5; j++) { printf("par[%d] = %d\n", j, par[j]); }
        }
        if (impI == 5) {
            impI = 0;
            for (int y = 0; y < 5; y++) { printf("impar[%d] = %d\n", y, imp[y]); }
        }
    }

    for (int j = 0; j < impI; j++) { printf("impar[%d] = %d\n", j, imp[j]); }
    for (int j = 0; j < parI; j++) { printf("par[%d] = %d\n", j, par[j]); } 

    return 0;
} 