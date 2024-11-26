#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	double sum1 = 0, sum2 = 0;
	for (int i = 1; i <= n; ++i) {
		double x, y; scanf("%lf%lf", &x, &y);
		sum1 += x, sum2 += y;
	}
	double ans = sum1 / sum2;
	printf("%.3lf\n", ans);
	return 0;
}