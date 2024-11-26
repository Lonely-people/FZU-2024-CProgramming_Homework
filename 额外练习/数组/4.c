#include <stdio.h>

int a[1010], b[1010];

int main() {
    int n; scanf("%d", &n);
    int cnt1 = 0, cnt2 = 0;
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &a[i]);
    }
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &b[i]);
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i] < b[i]) {
            ++cnt2;
        } else if (a[i] > b[i]) {
            ++cnt1;
        }
    }
    if (cnt1 > cnt2) {
        puts("Alice");
        printf("%d\n", cnt1);
    } else {
        puts("Bob");
        printf("%d\n", cnt2);
    }
    return 0;
}