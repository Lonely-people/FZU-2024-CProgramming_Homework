#include <stdio.h>

double a[110];

int main() {
	int n; scanf("%d", &n);
	double mx = 0, mn = 1e9, sum = 0;
	for (int i = 1; i <= n; ++i) {
		scanf("%lf", &a[i]);
		mx = a[i] > mx ? a[i] : mx;
		mn = a[i] < mn ? a[i] : mn;
		sum += a[i];
	}
	
	sum -= mx + mn;
	printf("%.1lf\n", sum / (1.0 * (n - 2)));
	return 0;
}