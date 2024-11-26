#include <stdio.h>

int a[100010];

int main() {
    int n; scanf("%d", &n);
    int sum = 0, ans = -1e9, ok = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
        if (a[i] > 0) {
            ok = 1;
        }
    }
    if (!ok) {
        int mx = -1e9;
        for (int i = 1; i <= n; ++i) {
            mx = a[i] > mx ? a[i] : mx;
        }
        printf("%d\n", mx);
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        if (sum < 0) {
            ans = ans < sum ? sum : ans;
            sum = a[i];
            continue;
        }
        sum += a[i];
        ans = ans < sum ? sum : ans;
    }
    printf("%d\n", ans);
    return 0;
}