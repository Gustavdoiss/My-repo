#include <stdio.h>

int MDC(int s) {
    int cont = 1;
    while (s != 0) {
        if (s%cont==0) {
            return s/cont;
            break;
        }else {
            cont++;
        }
    }
}

int main() {
    int N, F1, F2, res, soma, parcial, cont = 1;
    char maiorD[50] = "";
    scanf("%N", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &F1, &F2);
        soma = F1 + F2;
        do {
            parcial = soma/cont;
            res = soma % cont;
            if (res == 0) {
                maiorD = ;
            }

        }while ();
        printf("%d", res);
    }
    return 0;
}