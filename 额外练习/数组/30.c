#include <stdio.h>
#include <math.h>

int a[1000010], b[1010][1010];

int main() {
    int n, m; scanf("%d%d", &n, &m);
    int k = n / m, rest = n % m;
    if (k == 0) {
        printf("%d\n", (2 + 2 * n) * n / 2 / n);
        return 0;
    }
    if (rest != 0) {
        for (int i = 1; i <= k; ++i) {
            printf("%d ", (2 * m * i + 2 * (m * (i - 1) + 1)) * m / 2 / m);
        }
        int sum = 0;
        for (int i = n; i > n - rest; i--) {
            sum += 2 * i;
        }
        printf("%d\n", sum / rest);
    } else {
        for (int i = 1; i <= k; ++i) {
            printf("%d%c", (2 * m * i + 2 * (m * (i - 1) + 1)) * m / 2 / m, " \n"[i == k]);
        }
    }
    return 0;
}