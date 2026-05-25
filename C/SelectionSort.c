#include <stdio.h>

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort (int arr[], int n) {
    int tiny;
    for (int i = 0; i < n; i++) {
        tiny = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[tiny]) { tiny = j; }
        }
        swap (&arr[tiny], &arr[i]);
    }
}

void imprimirArray (int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int t;
    scanf("%d", &t);
    int A[t];

    for (int k = 0; k < t; k++) {
        scanf("%d", &A[k]);
    }

    imprimirArray(A, t);

    selectionSort(A, t);

    imprimirArray(A, t);
    
    return 0;
}
