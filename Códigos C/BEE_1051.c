#include <stdio.h>

int main() {
    int ini, fim, fuso, dur;
    scanf("%d %d %d", &ini, &fim, &fuso);

    dur = fim + ini;
    if (dur >= 24) dur -= 24;
    dur += fuso;
    if (dur < 0) dur += 24;

    printf("%d\n", (dur));

    return 0;
}