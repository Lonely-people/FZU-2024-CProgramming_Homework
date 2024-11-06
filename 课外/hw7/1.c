#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int mx = 0, cnt = 0;
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		if (x > mx) {
			mx = x;
			cnt = 1;
		} else if (x == mx) {
			++cnt;
		}
	}
	printf("%d %d\n", mx, cnt);
	return 0;
}