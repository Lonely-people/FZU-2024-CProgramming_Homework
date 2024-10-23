#include <stdio.h>

int main() {
	int a, t, b; scanf("%d%d%d", &a, &t, &b);
	long long ans = 1.0 * t * (b - 1) / (a - 1);
	printf("%lld\n", ans);
	return 0;
}