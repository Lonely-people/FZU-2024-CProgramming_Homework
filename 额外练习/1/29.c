#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int mx = 0, lmx = 0, mn = 1e6, lmn = 1e6;
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		if (x > mx) {
			lmx = mx;
			mx = x;
		} else if (x < mx && x > lmx) {
			lmx = x;
		}
		if (x < mn) {
			lmn = mn;
			mn = x;
		} else if (x > mn && x < lmn) {
			lmn = x;
		}
	}
	printf("%d %d\n", lmx, lmn);
	return 0;
}