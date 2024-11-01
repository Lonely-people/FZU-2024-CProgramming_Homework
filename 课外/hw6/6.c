#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int m;
	for (m = 1; m * (m + 1) / 2 <= n; ++m);

	for (int i = 1; i < m; ++i) {
		for (int j = 1; j <= m * 2 - 3; ++j) {
			if (j <= m - i - 1 || j > m + i - 2) {
				putchar('0');
			} else {
				if ((j + i - m + 1) & 1) {
					printf("%d", m - i);
				} else {
					putchar('0');
				}
			}
		}
		puts("");
	}
	return 0;
}