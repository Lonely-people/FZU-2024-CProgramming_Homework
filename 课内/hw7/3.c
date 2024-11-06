#include <stdio.h>

int a[100];

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
	}
	for (int i = 1; i < n; ++i) {
		int t = i;
		for (int j = i + 1; j <= n; ++j) {
			if (a[j] > a[t]) {
				t = j;
			}
		}
		int p = a[i];
		a[i] = a[t];
		a[t] = p;
	}
	for (int i = 1; i <= n; ++i) {
		printf("%d%c", a[i], " \n"[i == n]);
	}
	return 0;
}