#include <stdio.h>
 
int main() {

    int j = 7;
    for (int i = 1; i <= 9; i += 2) {
        int c = j - 2;
        while (j >= c) {
            printf("I=%d J=%d\n", i, j);
            j--;
        }
        j += 5;
    }
    return 0;
}