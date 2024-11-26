#include <stdio.h>

int main() {
	int a, b; scanf("%d%d", &a, &b);
	long long x = 1;
	for (int i = 1; i <= b; ++i) {
		x = x * 1ll * a % 10000;
	}
	printf("%04lld\n", x);
	return 0;
}