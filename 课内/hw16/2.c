#include <stdio.h>

struct Node {
    char s[20], t[20];
    int x;
} a[1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%s%s%d", a[i].s, a[i].t, &a[i].x);
    }
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += a[i].x;
    }
    sum /= n;
    printf("%.2lf\n", sum);
    for (int i = 1; i <= n; ++i) {
        if (a[i].x < sum) {
            printf("%s %s\n", a[i].t, a[i].s);
        }
    }
    return 0;
}