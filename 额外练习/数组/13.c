#include <stdio.h>

long long a[1000010];

int main() {
    int n; scanf("%d", &n);
    a[1] = a[2] = 1;
    for (int i = 3; i <= n; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%lld\n", a[n]);
    return 0;
}