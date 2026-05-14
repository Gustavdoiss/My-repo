#include <stdio.h>
//Média deve ser uma função

float media = 0, soma;

float mediaUp(int x[], int y) {
    int cont = 0;
    for (int j = 0; j < y; j++) {
        if (x[j] > media) {cont++;}
    }
    return (cont/(float)(y))*100;
}

int main() {
 
    int c, n;
    scanf("%d", &c);
    
    for (int i = 0; i < c; i++) {
        scanf("%d", &n);
        int temp[n];
        soma = 0;
        for (int l = 0; l < n; l++) {
            scanf("%d", &temp[l]);
            soma += temp[l];
            if (l == (n-1)) media = (float) soma/n;
        }
        printf("%.3f%%\n", mediaUp(temp, n));
    }
    
    
    return 0;
}