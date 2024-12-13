#include <stdio.h>

struct Node {
    char a[30], b[30], c[30], d[30], e[30];
} a[100];

int main() {
    int n; scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%s%s%s%s%s", a[i].a, a[i].b, a[i].c, a[i].d, a[i].e);
    }
    int k; scanf("%d", &k);
    while (k--) {
        int x; scanf("%d", &x);
        if (x >= n || x < 0) {
            puts("Not Found");
        } else {
            printf("%s %s %s %s %s\n", a[x].a, a[x].d, a[x].e, a[x].c, a[x].b);
        }
    }
    return 0;
}