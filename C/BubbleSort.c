#include <stdio.h>

void bubbleSort (int x[], int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n-i-1); j++) {
            if (x[j] > x[j+1]) {
                temp    = x[j];
                x[j]    = x[j+1];
                x[j+1]  = temp;
            }
        }
    }
}

void imprimirArray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {

    int t;
    scanf("%d", &t);
    int A[t];

    for (int k = 0; k < t; k++) {
        scanf("%d", &A[k]);
    }

    imprimirArray(A, t);

    bubbleSort(A, t);

    imprimirArray(A, t);

    return 0;
}
