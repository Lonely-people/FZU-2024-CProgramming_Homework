#include <stdio.h>

int a[110];

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		for (int j = 1; j <= n; ++j) {
			if (a[j] + x <= 100) {
				printf("%d %d\n", x, j);
				a[j] += x;
				break;
			}
		}
	}
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		cnt += (a[i] > 0);
	}
	printf("%d\n", cnt);
	return 0;
}