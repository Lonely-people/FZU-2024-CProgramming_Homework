#include <stdio.h>

struct Node {
    char num[20];
    int p1, p2;
} a[1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s%d%d", a[i].num, &a[i].p1, &a[i].p2);
    }
    int m; scanf("%d", &m);
    while (m--) {
        int x; scanf("%d", &x);
        for (int i = 0; i < n; ++i) {
            if (a[i].p1 == x) {
                printf("%s %d\n", a[i].num, a[i].p2);
                break;
            }
        }
    }
    return 0;
}