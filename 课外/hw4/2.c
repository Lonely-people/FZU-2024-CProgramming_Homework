#include <stdio.h>

int main() {
	long long n; scanf("%lld", &n);
	if (n <= 1) {
		puts("No");
		return 0;
	}
	for (long long i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			puts("No");
			return 0;
		}
	}
	puts("Yes");
	return 0;
}