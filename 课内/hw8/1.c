#include <stdio.h>

int a[100][100];

int main() {
	int n, m; scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	int cnt = 0;
	for (int i = 2; i < n; ++i) {
		for (int j = 2; j < m; ++j) {
			if (a[i][j] > a[i - 1][j] && a[i][j] > a[i][j - 1] && a[i][j] > a[i + 1][j] && a[i][j] > a[i][j + 1]) {
				++cnt;
				printf("%d %d %d\n", a[i][j], i, j);
			}
		}
	}
	if (cnt == 0) {
		printf("None %d %d\n", n, m);
	}
	return 0;
}