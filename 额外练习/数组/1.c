#include <stdio.h>

int id[110];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        int x; scanf("%d", &x);
        id[x] = i;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%d%c", id[i], " \n"[i == n]);
    }
    return 0;
}