#include <stdio.h>

int a[1000010], b[1010][1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int ok = 1;
    while (ok) {
        ok = 0;
        for (int i = 1; i < n; ++i) {
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                ok = 1;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d%c", a[i], " \n"[i == n]);
    }
    return 0;
}