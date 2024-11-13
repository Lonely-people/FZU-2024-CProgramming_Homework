#include <stdio.h>

int a[10][10];

int main() {
	int n; scanf("%d", &n);
	int l = 1, r = n, t = 0;
	while (l <= r) {
		for (int i = l; i <= r; ++i) {
			a[l][i] = ++t;
		}
		for (int i = l + 1; i <= r; ++i) {
			a[i][r] = ++t;
		}
		for (int i = r - 1; i >= l; i--) {
			a[r][i] = ++t;
		}
		for (int i = r - 1; i > l; i--) {
			a[i][l] = ++t;
		}
		++l, --r;
	}
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			printf("%3d", a[i][j]);
		}
		puts("");
	}
	return 0;
}