#include <stdio.h>

struct Node {
    char s[20];
    double x, y, z;
} a[1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%s%lf%lf%lf", a[i].s, &a[i].x, &a[i].y, &a[i].z);
    }
    for (int i = 1; i <= n; ++i) {
        printf("%s %.2lf\n", a[i].s, a[i].x + a[i].y - a[i].z);
    }
    return 0;
}