#include <stdio.h>
#include <string.h>

void insertionSort (char arr[][21], int n) {
    for (int i = 0; i < n; i++) {
        char temp[21];
        strcpy(temp, arr[i]);
        int j = i;

        while (j > 0 && strcmp(temp, arr[j-1]) < 0) {
            strcpy(arr[j], arr[j - 1]);
            j -= 1;
        }
        strcpy(arr[j], temp);
    }
}

int main() {
    
    int x, good = 0, bad = 0;
    scanf("%d", &x);
    char comp;
    char nomes[x][21];

    for (int i = 0; i < x; i++) {
        scanf(" %c %s", &comp, nomes[i]);
        if      (comp == '+') { good++; }
        else if (comp == '-') { bad++; }
    }

    insertionSort(nomes, x);
    for (int j = 0; j < x; j++) { printf("%s\n", nomes[j]); }
    printf("Se comportaram: %d | Nao se comportaram: %d\n", good, bad);
    return 0;
}