#include <stdio.h>

double a[4];

double f(double x) {
	return a[3] * x * x * x + a[2] * x * x + a[1] * x + a[0];
}

int main() {
	for (int i = 3; i >= 0; i--) {
		scanf("%lf", &a[i]);
	}
	double l, r; scanf("%lf%lf", &l, &r);
	double tmpl = l;
	while (r - l > 1e-2) {
		double x = (l + r) / 2;
		if (f(x) == 0) {
			printf("%.2lf\n", x);
			return 0;
		} else if (f(x) * f(tmpl) < 0) {
			r = x;
		} else {
			l = x;
		}
	}
	printf("%.2lf\n", l);
	return 0;
}