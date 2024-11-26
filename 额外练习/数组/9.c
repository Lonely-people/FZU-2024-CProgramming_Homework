#include <stdio.h>

int a[100010];

int main() {
    int n; scanf("%d", &n);
    int sum1 = 0;
    for (int i = 1; i <= n; ++i) {
        int x; scanf("%d", &x);
        sum1 += x;
    }
    int sum2 = 0;
    for (int i = 1; i <= n; ++i) {
        int x; scanf("%d", &x);
        sum2 += x;
    }
    if (sum1 > sum2) {
        puts("cat");
    } else if (sum1 < sum2) {
        puts("pig");
    } else {
        puts("sad");
    }
    return 0;
}