#include <stdio.h>

int main() {
	int a, n; scanf("%d%d", &a, &n);
	int sum = 0, p = 0;
	for (int i = 1; i <= n; ++i) {
		p = p * 10 + a;
		sum += p;
	}
	printf("%d\n", sum);
	return 0;
}