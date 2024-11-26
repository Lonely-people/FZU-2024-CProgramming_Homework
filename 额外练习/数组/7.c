#include <stdio.h>

int a[100010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    int sum1 = 0, sum2 = 0, mx = 0, id = 0;
    for (int i = 1; i <= n; ++i) {
        if (i & 1) {
            sum1 += a[i];
        } else {
            sum2 += a[i];
            if (a[i] > mx) {
                mx = a[i];
                id = i / 2;
            }
        }
    }
    if (sum2 - mx >= sum1) {
        puts("RUN");
    } else {
        printf("%d\n", id);
    }
    return 0;
}