#include <stdio.h>
#include <string.h>

int main() {
    int t;
    char s[10], r[10];
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        scanf("%s %s", s, r);

        if (!strcmp(s, r)) {
            printf("Caso #%d: De novo!\n", i);
        } else if (
            (!strcmp(s, "pedra")   && (!strcmp(r, "tesoura") || !strcmp(r, "lagarto"))) ||
            (!strcmp(s, "papel")   && (!strcmp(r, "pedra")   || !strcmp(r, "Spock")))   ||
            (!strcmp(s, "tesoura") && (!strcmp(r, "papel")   || !strcmp(r, "lagarto"))) ||
            (!strcmp(s, "lagarto") && (!strcmp(r, "papel")   || !strcmp(r, "Spock")))   ||
            (!strcmp(s, "Spock")   && (!strcmp(r, "pedra")   || !strcmp(r, "tesoura")))
        ) {
            printf("Caso #%d: Bazinga!\n", i);
        } else {
            printf("Caso #%d: Raj trapaceou!\n", i);
        }
    }

    return 0;
}