#include <stdio.h>

int a[1000010], b[1010][1010];

int main() {
    int n; scanf("%d", &n);
    int c = 0, o = 0;
    for (int i = n; i >= 1; i--) {
        if (!o) {
            for (int j = 1; j <= n; ++j) {
                b[i][j] = ++c;
            }
        } else {
            for (int j = n; j >= 1; j--) {
                b[i][j] = ++c;
            }
        }
        o ^= 1;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            printf("%d%c", b[i][j], " \n"[j == n]);
        }
    }
    return 0;
}