#include <stdio.h>

int a[100010];

int main() {
    int n, q; scanf("%d%d", &n, &q);
    for (int i = 1; i <= n; ++i) {
        int x; scanf("%d", &x);
        a[i] = a[i - 1] + x;
    }
    while (q--) {
        int l, r; scanf("%d%d", &l, &r);
        printf("%d\n", a[r] - a[l - 1]);
    }
    return 0;
}