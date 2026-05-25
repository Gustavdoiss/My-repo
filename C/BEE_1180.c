#include <stdio.h>

void menorArray (int arr[], int n) {
    int res[2] = {99999999, 0};

    for (int i = 0; i < n; i++) {
        if (arr[i] < res[0]) { res[0] = arr[i]; res[1] = i; }
    }

    printf("Menor valor: %d\nPosicao: %d\n", res[0], res[1]);
}

int main() {
    
    int t;
    scanf("%d", &t);
    int A[t];

    for (int k = 0; k < t; k++) {
        scanf("%d", &A[k]);
    }

    menorArray(A, t);
    
    return 0;
}