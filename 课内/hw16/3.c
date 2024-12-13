#include <stdio.h>

struct Node {
    char s[20], t[20];
    int x;
} a[1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int x, y, z;
        scanf("%s%s%d%d%d", a[i].s, a[i].t, &x, &y, &z);
        a[i].x = x + y + z;
    }
    int mx = 0, id = 0;
    for (int i = 1; i <= n; ++i) {
        if (a[i].x > mx) {
            mx = a[i].x;
            id = i;
        }
    }
    printf("%s %s %d\n", a[id].t, a[id].s, a[id].x);
    return 0;
}