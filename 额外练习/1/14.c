#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	if (sum == 0 || sum == 1) {
		puts("So pity, Dao!");
		return 0;
	}
	for (int i = 2; i * i <= sum; ++i) {
		if (sum % i == 0) {
			puts("So pity, Dao!");
			return 0;
		}
	}
	puts("Congratulations, Dao!");
	return 0;
}