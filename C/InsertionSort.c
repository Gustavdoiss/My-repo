#include <stdio.h>

void insertionSort (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        int j = i;

        while (j > 0 && temp < arr[j-1]) {
            arr[j] = arr[j - 1];
            j -= 1;
        }
        arr[j] = temp;
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

    insertionSort(A, t);

    imprimirArray(A, t);

    return 0;
}