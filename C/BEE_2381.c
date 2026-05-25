#include <stdio.h>
#include <string.h>

void insertionSort (char nomes[][21], int n) {
    for (int i = 0; i < n; i++) {
        char temp[21];
        strcpy(temp, nomes[i]);
        int j = i;

        while (j > 0 && strcmp(temp, nomes[j - 1]) < 0) {
            strcpy(nomes[j], nomes[j - 1]);
            j -= 1;
        }
        strcpy(nomes[j], temp);
    }
}

int main() {
    
    int a, k;
    scanf("%d %d", &a, &k);
    char alunos[a][21];

    for (int i = 0; i < a; i++) {
        scanf("%s", alunos[i]);
    }

    insertionSort (alunos, a);

    printf("%s\n", alunos[k - 1]);

    return 0;
}