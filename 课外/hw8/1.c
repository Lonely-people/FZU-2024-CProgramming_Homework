#include <stdio.h>

int a[100][100];

int main() {
	int n; scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			scanf("%d", &a[i][j]);
			sum += a[i][j];
		}
	}
	for (int i = 1; i <= n; ++i) {
		sum -= a[i][n];
		sum -= a[n][i];
		sum -= a[i][n - i + 1];
	}
	printf("%d\n", sum + a[1][n] + a[n][1] + a[n][n]);
	return 0;
}