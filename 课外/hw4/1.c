#include <stdio.h>

int gcd(int x, int y) {
	return y == 0 ? x : gcd(y, x % y);
}

int main() {
	int m, n; scanf("%d%d", &n, &m);
	int a = gcd(n, m), b = n / gcd(n, m) * m;
	printf("%d %d\n", a, b);
	return 0;
}