#include <stdio.h>

struct Node {
    int id, rk;
    double h;
} a[1010];

double b[1010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%lf", &b[i]);
        a[i].h = b[i];
        a[i].id = i;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j) {
            if (a[j].h < a[j + 1].h) {
                struct Node tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }
    }
    for (int i = 1; i <= n; ++i) {
        a[i].rk = i;
    }
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (b[i] == a[j].h) {
                printf("%d ", a[j].rk);
                if (a[j].rk == 1) {
                    printf("0 %d\n", a[j + 1].id);
                } else if (a[j].rk == n) {
                    printf("%d 0\n", a[j - 1].id);
                } else {
                    printf("%d %d\n", a[j - 1].id, a[j + 1].id);
                }
            }
        }
    }
    return 0;
}