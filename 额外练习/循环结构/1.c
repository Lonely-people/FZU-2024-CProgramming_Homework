#include <stdio.h>

double f[4];

int main() {
	int n; scanf("%d", &n);
	f[1] = 1, f[2] = 1;
	double ans = 0;
	for (int i = 3; i <= n + 2; ++i) {
		f[3] = f[1] + f[2];
		f[1] = f[2], f[2] = f[3];
		ans += 1.0 * f[2] / f[1];
	}
	printf("%.6lf\n", ans);
	return 0;
}