#include <stdio.h>

void insertionSort (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        int j = i;

        while (j > 0 && temp > arr[j-1]) {
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

    int x, q;

    while (scanf("%d %d", &x, &q) != EOF) {
        int notas[x], consultas[q];
        for (int i = 0; i < x; i++) {
            scanf("%d", &notas[i]);
        }
        insertionSort(notas, x);
        for (int j = 0; j < q; j++) {
            scanf("%d", &consultas[j]);
            printf("%d\n", notas[consultas[j]-1]);
        }

    }
    return 0;
}