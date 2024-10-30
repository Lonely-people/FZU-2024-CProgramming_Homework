#include <stdio.h>

int go(int x, int m) {
	int sum = 0;
	while (x) {
		sum += x % m;
		x /= m;
	}
	return sum;
}

int main() {
	int n, a, b; scanf("%d%d%d", &n, &a, &b);
	if (go(n, a) == go(n, b)) {
		printf("%d is a perfect number.\n", n);
	} else {
		printf("%d is not a perfect number.\n", n);
	}
	return 0;
}