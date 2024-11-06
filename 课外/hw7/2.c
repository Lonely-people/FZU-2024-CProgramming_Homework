#include <stdio.h>

int main() {
	int cnt[10];
	int n; scanf("%d", &n);
	for (int i = 0; i <= 9; ++i) {
		cnt[i] = 0;
	}
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		if (x == 0) {
			++cnt[x % 10];
		}
		while (x) {
			++cnt[x % 10];
			x /= 10;
		}
	}
	int mx = 0;
	for (int i = 0; i <= 9; ++i) {
		if (cnt[i] > mx) {
			mx = cnt[i];
		}
	}
	printf("%d:", mx);
	for (int i = 0; i < 10; ++i) {
		if (cnt[i] == mx) {
			printf(" %d", i);
		}
	}
	return 0;
}