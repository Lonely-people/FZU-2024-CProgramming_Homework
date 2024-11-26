#include <stdio.h>

const int mod = 1000000007;

int a[100010];

int main() {
    int n; scanf("%d", &n);
    a[0] = 0, a[1] = 1;
    for (int i = 2; i <= 10000; ++i) {
        a[i] = (a[i - 1] + a[i - 2]) % mod;
    }
    for (int i = 1; i <= n; ++i) {
        int x; scanf("%d", &x);
        if (x != a[i - 1]) {
            puts("NO");
            return 0;
        }
    }
    puts("YES");
    return 0;
}