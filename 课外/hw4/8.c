#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	double ans = 0;
	for (int i = 1; i <= n; ++i) {
		ans += 1 / (2.0 * i - 1);
	}
	printf("%.2lf\n", ans);
	return 0;
}