#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	double h = 100, ans = 100;
	for (int i = 2; i <= n; ++i) {
		ans += h / 2;
		h /= 2;
	}
	printf("%.4lf %.4lf\n", ans, h / 2);
	return 0;
}