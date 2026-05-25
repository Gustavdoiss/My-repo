#include <stdio.h>

void bubbleSort (int x[], int t) {
    int temp;
    for (int k = 0; k < t; k++) {
        for (int j = 0; j < (t-k-1); j++) {
            if (x[j] > x[j+1]) {
                temp    = x[j];
                x[j]    = x[j+1];
                x[j+1]  = temp;
            }
        }
    }
}

void imprimirArray (int arr[], int y) {
    for (int f = 0; f < y; f++) {
        printf("%04d\n", arr[f]);
    }
}

int main() {
 
    int n;
    while (scanf("%d", &n) != EOF) {
        int codes[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &codes[i]);
        }
        bubbleSort(codes, n);
        imprimirArray(codes, n);
    }
    return 0;
}