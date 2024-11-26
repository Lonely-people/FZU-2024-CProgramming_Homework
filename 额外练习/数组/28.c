#include <stdio.h>

int a[1000010], b[1010][1010];

int main() {
    int n; scanf("%d\n", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; ++i) {
        int p = i;
        for (int j = i + 1; j <= n; ++j) {
            if (a[p] < a[j]) {
                p = j;
            }
        }
        int t = a[i];
        a[i] = a[p];
        a[p] = t;
    }
    int k; scanf("%d", &k);
    for (int i = 1; i <= k; ++i) {
        printf("%d%c", a[i], " \n"[i == k]);
    }
    return 0;
}