#include <stdio.h>

int main() {
	int T; scanf("%d", &T);
	while (T--) {
		int a, b; scanf("%d%d", &a, &b);
		long long sum1 = 0, sum2 = 0;
		for (int i = 1; i < a; ++i) {
			if (a % i == 0) {
				sum1 += i;
			}
		}
		for (int i = 1; i < b; ++i) {
			if (b % i == 0) {
				sum2 += i;
			}
		}
		if (sum1 == b && sum2 == a) {
			puts("YES");
		} else {
			puts("NO");
		}
	}
	return 0;
}