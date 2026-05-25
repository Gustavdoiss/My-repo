#include <stdio.h>
 
int main() {

    int     players;
    float   saque, bloqueio, ataque;
    scanf("%d", &players);
    int temp[3] = {0}, total[3] = {0}, sucesso[3] = {0};
    char nomes[players][50];

    for (int i = 0; i < players; i++) {
        scanf("%s", &nomes[i]);
        for (int j = 0; j < 3; j++) {
            scanf("%d", &temp[j]);
            total[j] += temp[j];
        }
        for (int j = 0; j < 3; j++) {
            scanf("%d", &temp[j]);
            sucesso[j] += temp[j];
        }
    }

    saque = (float)sucesso[0]*100/total[0];
    bloqueio = (float)sucesso[1]*100/total[1];
    ataque = (float)sucesso[2]*100/total[2];

    printf("Pontos de Saque: %.2f %%.\n", saque);
    printf("Pontos de Bloqueio: %.2f %%.\n", bloqueio);
    printf("Pontos de Ataque: %.2f %%.\n", ataque);
    return 0;
}