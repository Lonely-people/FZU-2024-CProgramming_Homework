#include <stdio.h>

int a[1000010], b[1010][1010], c[1010][1010], d[1010][1010];

int main() {
    int n, m; scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            scanf("%d", &c[i][j]);
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= m; ++k) {
                d[i][k] += b[i][j] * c[j][k];
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= m; ++j) {
            printf("%d%c", d[i][j], " \n"[j == m]);
        }
    }
    return 0;
}