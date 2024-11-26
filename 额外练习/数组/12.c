#include <stdio.h>

int a[100010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i < n; ++i) {
        int p = i;
        for (int j = i + 1; j <= n; ++j) {
            if (a[p] > a[j]) {
                p = j;
            }
        }
        int t = a[i];
        a[i] = a[p];
        a[p] = t;
    }
    int cnt = 1;
    for (int i = 2; i <= n; ++i) {
        if (a[i] == a[i - 1]) {
            ++cnt;
        } else {
            cnt = 0;
        }
        if (cnt > n / 2) {
            printf("%d\n", a[i]);
            break;
        }
    }
    return 0;
}