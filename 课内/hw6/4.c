#include <stdio.h>

double f[500010], pre[500010];

int main() {
	f[1] = 1.0, pre[1] = 1.0;
	for (int i = 2; i <= 50000; ++i) {
		f[i] = f[i - 1] + 2.0 / i;
		pre[i] = pre[i - 1] + f[i];
	}
	int n;
	while (~scanf("%d", &n)) {
		if (n == 0) {
			break;
		}
		printf("%.2lf\n", pre[n]);
	}
	return 0;
}