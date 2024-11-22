#include <stdio.h>

int f[100];

int main() {
    f[1] = 1, f[2] = 2;
    int n; scanf("%d", &n);
    for (int i = 3; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }
    printf("%d\n", f[n]);
    return 0;
}