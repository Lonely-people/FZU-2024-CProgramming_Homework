#include <stdio.h>
#include <math.h>

double a[100010];

int main() {
    int n; scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        double r; scanf("%lf", &r);
        double v = 4.0 / 3.0 * acos(-1.0) * r * r * r;
        a[i] = v;
    }
    for (int i = 1; i < n; ++i) {
        int p = i;
        for (int j = i + 1; j <= n; ++j) {
            if (a[p] < a[j]) {
                p = j;
            }
        }
        double t = a[i];
        a[i] = a[p];
        a[p] = t;
    }
    for (int i = 1; i <= n; ++i) {
        printf("%.2lf\n", a[i]);
    }
    return 0;
}