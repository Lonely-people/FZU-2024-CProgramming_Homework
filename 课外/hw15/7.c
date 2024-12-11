#include <stdio.h>

struct Node {
    int sex;
    char s[10];
} a[1010];

int vis[1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%s", &a[i].sex, a[i].s);
    }
    for (int i = 0; i < n / 2; ++i) {
        for (int j = n - 1; j >= n / 2; j--) {
            if (a[i].sex != a[j].sex && !vis[i] && !vis[j]) {
                printf("%s %s\n", a[i].s, a[j].s);
                vis[i] = 1;
                vis[j] = 1;
            }
        }
    }
    return 0;
}