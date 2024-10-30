#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int ans = 1;
	for (int i = n - 1; i >= 1; i--) {
		ans++;
		ans *= 2;
	}
	printf("%d\n", ans);
	return 0;
}