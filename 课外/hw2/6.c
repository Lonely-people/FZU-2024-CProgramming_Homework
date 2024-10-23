#include <stdio.h>
#include <math.h>

int main() {
	double x1, x2, x3, y1, y2, y3;
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);
	double l1 = sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
	double l2 = sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3));
	double l3 = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));

	if (l1 + l2 <= l3 || l2 + l3 <= l1 || l1 + l3 <= l2) {
		printf("Impossible\n");
	} else {
		double L = l1 + l2 + l3, p = L / 2;
		double S = sqrt(p * (p - l1) * (p - l2) * (p - l3));
		printf("L = %.2lf, A = %.2lf\n", L, S);
	}
	return 0;
}