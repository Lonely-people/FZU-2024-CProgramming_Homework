#include <stdio.h>

int a[110];

int main() {
    int T; scanf("%d", &T);
    a[1] = a[2] = 1;
    for (int i = 3; i <= 100; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    while (T--) {
        int n; scanf("%d", &n);
        printf("%d\n", a[n]);
    }
    return 0;
}