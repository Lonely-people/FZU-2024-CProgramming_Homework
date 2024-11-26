#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int sum1 = 0, sum2 = 0;
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		if (i & 1) {
			sum1 += x;
		} else {
			sum2 += x;
		}
	}
	printf("%d\n", sum1 - sum2);
	return 0;
}