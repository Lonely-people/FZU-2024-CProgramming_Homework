#include <stdio.h>
#include <math.h>

int a[1000010], b[1010][1010];

int main() {
    int n; scanf("%d\n", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; ++i) {
        int p = i;
        for (int j = i + 1; j <= n; ++j) {
            if (abs(a[p]) < abs(a[j])) {
                p = j;
            }
        }
        int t = a[i];
        a[i] = a[p];
        a[p] = t;
    }
    for (int i = 1; i < n; ++i) {
        if (abs(a[i]) == abs(a[i + 1])) {
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
        printf("%d ", a[i]);
    }
    printf("%d\n", a[n]);
    return 0;
}