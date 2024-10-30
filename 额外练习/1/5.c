#include <stdio.h>

int main() {
	double a, x; scanf("%lf%lf", &a, &x);
	int ans = 0;
	double sum = 0, p = 1;
	while (sum < x) {
		sum += a * p;
		p *= 0.98;
		++ans;
	}
	printf("%d\n", ans);
	return 0;
}