#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	double a[3], b[3];
	for (int i = 0; i < 3; ++i) {
		scanf("%lf", &a[i]);
	}
	for (int i = 0; i < 3; ++i) {
		scanf("%lf", &b[i]);
	}

	double sum = 0;
	for (int i = 0; i < 3; ++i) {
		sum += a[i] * b[(i + 1) % 3];
	}
	printf("%.4lf\n", sum * n);
	return 0;
}