#include <stdio.h>

int a[100][100];

void solve() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= n; ++j) {
			scanf("%d", &a[i][j]);
		}
	}
	for (int i = 2; i <= n; ++i) {
		for (int j = 1; j < i; ++j) {
			if (a[i][j] != 0) {
				puts("NO");
				return;
			}
		}
	}
	puts("YES");
}

int main() {
	int T; scanf("%d", &T);
	while (T--) {
		solve();
	}
	return 0;
}