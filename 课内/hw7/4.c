#include <stdio.h>

int a[110];

int main() {
	int n, k; scanf("%d%d", &n, &k);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i <= k; ++i) {
		for (int i = 1; i < n; ++i) {
			if (a[i] > a[i + 1]) {
				int t = a[i];
				a[i] = a[i + 1];
				a[i + 1] = t;
			}
		}
	}
	for (int i = 1; i <= n; ++i) {
		printf("%d%c", a[i], " \n"[i == n]);
	}
	return 0;
}