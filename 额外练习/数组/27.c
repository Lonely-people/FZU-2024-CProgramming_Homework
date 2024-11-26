#include <stdio.h>

int a[1000010], b[1010][1010];

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

int main() {
    int n; scanf("%d\n", &n);
    int mx = 0, mn = 1e9, sum = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
        sum += a[i];
    }
    printf("%.2lf\n", 1.0 * (sum - mx - mn) / (n - 2));
    return 0;
}