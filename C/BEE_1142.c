#include <stdio.h>

int main() {

    int N, j = 0, m[4];
    scanf("%d", &N);

    for (int i = 0; i < N; i++) {
        m[0] = j + 1;
        m[1] = (m[0] + 1);
        m[2] = (m[1] + 1);
        printf("%d %d %d PUM\n", m[0], m[1], m[2]);
        j = (m[2] + 1);
    }

    return 0;
}