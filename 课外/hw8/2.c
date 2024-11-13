#include <stdio.h>

int a[10][10], b[10][10];

int main() {
	int m, n; scanf("%d %d", &m, &n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			scanf("%d", &a[i][j]);
			b[i][(j + m) % n] = a[i][j];
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			printf("%d ", b[i][j]);
		}
		puts("");
	}
	return 0;
}