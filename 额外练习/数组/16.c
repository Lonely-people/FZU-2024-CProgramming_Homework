#include <stdio.h>

int a[1000010], b[1010][1010];

int main() {
    int n, m; scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%d%c", b[j][i], " \n"[j == n]);
        }
    }
    return 0;
}