#include <stdio.h>

int min(int x, int y) {
	return x < y ? x : y;
}

int main() {
	int n; scanf("%d", &n);
	int ans = 2147483647;
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		ans = min(ans, x);
	}
	printf("%d\n", ans);
	return 0;
}