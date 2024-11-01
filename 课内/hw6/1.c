#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	double ans = 0;
	for (int i = 1; i <= n; ++i) {
		ans += (i & 1 ? 1 : -1) * 1.0 / (3 * i - 2);
	}
	printf("sum = %.3lf\n", ans);
	return 0;
}