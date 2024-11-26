#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int sum = 0;
	for (int i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			sum += i;
			if (n / i != i) {
				sum += n / i;
			}
		}
	}
	sum -= n;
	printf("%d ", sum);
	if (sum == n) {
		puts("YES");
	} else {
		puts("NO");
	}
	return 0;
}