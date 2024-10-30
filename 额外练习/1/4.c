#include <stdio.h>

int main() {
	int n, a, b, c, x, y; scanf("%d%d%d%d%d%d", &n, &a, &b, &c, &x, &y);
	long long ans = 0;
	long long p = a;
	if (p > c) {
		if (x == 1 || y == 1) {
			ans += p;
		}
	}
	for (int i = 2; i <= n; ++i) {
		p += b;
		if (p > c) {
			if (i % x == 0 || i % y == 0) {
				ans += p;
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}