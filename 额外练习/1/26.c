#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= 1000000; ++i) {
		long long p = 1ll * i * (i + 1) / 2;
		if (p >= n) {
			printf("%d\n", i);
			break;
		}
	}
	return 0;
}