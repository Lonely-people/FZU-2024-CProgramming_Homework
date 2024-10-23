#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int a = n / 1000, b = (n / 100) % 10, c = (n % 100) / 10, d = n % 10;
	printf("%d\n", d * 1000 + c * 100 + b * 10 + a);
	return 0;
}