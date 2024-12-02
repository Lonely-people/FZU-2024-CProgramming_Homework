#include <stdio.h>

const int N = 10;

int main() {
    int a[N][N];
    int m, n; scanf("%d%d", &m, &n);
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &a[i][j]);
        }
    }
    int (*p)[N];
    for (p = a; p < a + m; ++p) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += (*p)[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}