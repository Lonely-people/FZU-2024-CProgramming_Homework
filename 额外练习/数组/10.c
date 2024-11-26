#include <stdio.h>

int a[100010];

int main() {
    int n, m; scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (m & 1) {
            a[i] ^= 1;
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        cnt += a[i];
    }
    printf("%d\n", cnt);
    return 0;
}