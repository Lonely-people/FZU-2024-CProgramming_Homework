#include <stdio.h>

int main() {
	int n; scanf("%d", &n);

	while (n > 9) {
		int tmp = n, sum = 0;
		while (tmp) {
			sum += tmp % 10;
			tmp /= 10;
		}
		n = sum;
	}
	printf("%d\n", n);
	return 0;
}