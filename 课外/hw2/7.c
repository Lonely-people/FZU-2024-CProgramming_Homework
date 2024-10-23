#include <stdio.h>
#include <math.h>

double go(double x) {
	if (x == -0.00) {
		return 0.00;
	}
	return x;
}

int main() {
	double a, b, c; scanf("%lf%lf%lf", &a, &b, &c);
	if (a == 0 && b == 0) {
		if (c == 0) {
			printf("Zero Equation\n");
		} else {
			printf("Not An Equation\n");
		}
	} else {
		if (a == 0) {
			printf("%.2lf\n", go(-c / b));
		} else {
			double delta = b * b - 4 * a * c;
			if (delta >= 0) {
				if (delta == 0) {
					printf("%.2lf\n", go(-b / a / 2));
				} else {
					double x1 = (-b + sqrt(delta)) / a / 2, x2 = (-b - sqrt(delta)) / a / 2;
					printf("%.2lf\n%.2lf\n", go(x1), go(x2));
				}
			} else {
				delta = -delta;
				double r = -b / a / 2;
				double g = sqrt(delta) / a / 2;
				printf("%.2lf+%.2lfi\n%.2lf%.2lfi\n", go(r), go(g), go(r), go(-g));
			}
		}
	}
	return 0;
}