#include <stdio.h>

int main() {
	int n, m; scanf("%d%d", &n, &m);
	int mn = 1e9, x = 0, y = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			int p; scanf("%d", &p);
			if (p < mn) {
				mn = p;
				x = i, y = j;
			}
		}
	}
	printf("%d %d %d\n", mn, x, y);
	return 0;
}