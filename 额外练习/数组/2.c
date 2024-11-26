#include <stdio.h>

int a[110];

int main() {
    int n, m; scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    while (m--) {
        int x; scanf("%d", &x);
        int mn = 1e9, id = 0;
        for (int i = 1; i <= n; ++i) {
            if (mn > a[i]) {
                mn = a[i];
                id = i;
            }
        }
        a[id] += x;
    }
    int mn = 1e9, id = 0;
    for (int i = 1; i <= n; ++i) {
        if (mn > a[i]) {
            mn = a[i];
            id = i;
        }
    }
    printf("%d\n", a[id]);
    return 0;
}