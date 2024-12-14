#include <stdio.h>

struct Node {
    char s[100];
    int y;
} a[1010];
int vis[1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%s%d", a[i].s, &a[i].y);
    }
    int x; scanf("%d", &x);
    for (int i = 1; i <= n; ++i) {
        vis[i] = 0;
    }
    for (int i = 1; i <= n; ++i) {
        if (a[i].y == x) {
            vis[i] = 1;
        }
    }
    int ed = 0;
    for (int i = n; i >= 1; i--) {
        if (!vis[i]) {
            ed = i;
            break;
        }
    }
    for (int i = 1; i <= ed; ++i) {
        if (!vis[i]) {
            printf("%s%c", a[i].s, " \n"[i == ed]);
        }
    }
    return 0;
}