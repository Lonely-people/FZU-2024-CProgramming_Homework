#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int mx = 0, lmx = 0;
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		if (x > mx) {
			lmx = mx;
			mx = x;
		} else if (x > lmx) {
			lmx = x;
		}
	}
	printf("%d %d\n", mx, lmx);
	return 0;
}