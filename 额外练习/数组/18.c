#include <stdio.h>

int a[1000010], b[1010][1010], c[1010][1010], d[1010][1010];

int main() {
    int n, m; scanf("%d%d", &m, &n);
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            scanf("%d", &b[i][j]);
        }
    }
    int p, q; scanf("%d%d", &p, &q);
    for (int i = 1; i <= p; ++i) {
        for (int j = 1; j <= q; ++j) {
            scanf("%d", &c[i][j]);
        }
    }
    if (n != p) {
        puts("sad");
        return 0;
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            for (int k = 1; k <= q; ++k) {
                d[i][k] += b[i][j] * c[j][k];
            }
        }
    }
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= q; ++j) {
            printf("%d%c", d[i][j], " \n"[j == q]);
        }
    }
    return 0;
}