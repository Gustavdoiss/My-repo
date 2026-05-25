#include <stdio.h>
#include <string.h>

// Troca valores de posição
void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

// Troca strings de posição
void swapStr (char x[], char y[]) {
    char temp[50];
    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
}

// Organiza o quadro de medalhas com SelectionSort, colocando o maior na frente
void selectionSortM (char nomes[][50], int mat[][3], int n) {
    int big;
    for (int i = 0; i < n - 1; i++) {
        big = i;
        for (int j = i+1; j < n; j++) {
            if      (mat[j][0] > mat[big][0]) //Mais medalhas de ouro                           
            { big = j; }
            else if (mat[j][0] == mat[big][0] && mat[j][1] > mat[big][1]) //Mais medalhas de prata
            { big = j; }
            else if (mat[j][0] == mat[big][0] && mat[j][1] == mat[big][1] && mat[j][2] > mat[big][2]) //Mais medalhas de bronze  
            { big = j; }
            else if (mat[j][0] == mat[big][0] && mat[j][1] == mat[big][1] && mat[j][2] == mat[big][2] && strcmp(nomes[j], nomes[big]) < 0) //Ordem alfabética
            { big = j; }
        }
        // Trocar medalhas
        for (int f = 0; f < 3; f++) { swap(&mat[big][f], &mat[i][f]); }
        // Trocar nomes
        swapStr(nomes[big], nomes[i]);
    }
}

void printCountry (int t, char nomes[][50], int medals[][3]) {
    printf("%s %d %d %d\n", nomes[t], medals[t][0], medals[t][1], medals[t][2]);
}

int main() {
    
    int p;
    scanf("%d", &p);
    char nomes[p][50];
    int  medals[p][3];
    for (int i = 0; i < p; i++) {
        scanf("%s %d %d %d", nomes[i], &medals[i][0], &medals[i][1], &medals[i][2]);
    }

    selectionSortM (nomes, medals, p);
    for (int i = 0; i < p; i++) {
        printCountry (i, nomes, medals);
    }
    return 0;
}