#include <stdio.h>
#include <math.h>

double go(double x) {
	double x0 = x, x1 = 0.5 * (x0 + x / x0);
	while (fabs(x1 - x0) >= 1e-6) {
		x0 = x1;
		x1 = 0.5 * (x0 + x / x0);
	}
	return x1;
}

int main() {
	double a; scanf("%lf", &a);
	double ans = go(a);
	printf("%.6lf\n", ans);
	return 0;
}