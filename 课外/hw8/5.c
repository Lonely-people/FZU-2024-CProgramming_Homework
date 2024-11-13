#include <stdio.h>

int a[110][110];

int main() {
	int n; scanf("%d", &n);
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 1; i <= n; ++i) {
		sum1 += a[i][i];
		sum2 += a[i][n - i + 1];
	}
	printf("%d %d\n", sum1, sum2);
	return 0;
}