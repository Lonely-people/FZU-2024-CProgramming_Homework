#include <stdio.h>

double max(double x, double y) {
	return x > y ? x : y;
}

double min(double x, double y) {
	return x < y ? x : y;
}

int main() {
	int op; scanf("%d", &op);
	double a[3];
	scanf("%lf%lf%lf", &a[0], &a[1], &a[2]);
	double mx = max(a[0], max(a[1], a[2])), mn = min(a[0], min(a[1], a[2]));
	if (op == 0) {
		printf("%.2lf %.2lf %.2lf\n", mn, a[0] + a[1] + a[2] - mx - mn, mx);
	} else {
		printf("%.2lf %.2lf %.2lf\n", mx, a[0] + a[1] + a[2] - mx - mn, mn);
	}
	return 0;
}