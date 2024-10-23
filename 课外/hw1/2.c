#include <stdio.h>
#include <math.h>

int main() {
	double m, y, r; scanf("%lf%lf%lf", &m, &y, &r);
	double i = m * pow(1 + r, y) - m;
	printf("interest = %.2lf\n", i);
	return 0;
}