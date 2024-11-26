#include <stdio.h>

int a[1000010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int x; scanf("%d", &x);
    int ok = 0;
    if (x <= a[1]) {
        printf("%d ", x);
        for (int i = 1; i <= n; ++i) {
            printf("%d%c", a[i], " \n"[i == n]);
        }
        return 0;
    }
    for (int i = 1; i < n; ++i) {
        printf("%d ", a[i]);
        if (a[i] <= x && x <= a[i + 1] && !ok) {
            printf("%d ", x);
            ok = 1;
        }
    }
    if (!ok) {
        printf("%d %d\n", a[n], x);
    } else {
        printf("%d\n", a[n]);
    }
    return 0;
}