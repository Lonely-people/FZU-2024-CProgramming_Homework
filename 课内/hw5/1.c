#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	long long ans1 = 0, ans2 = 0;
	for (int i = 1; i <= n; ++i) {
		long long x; scanf("%lld", &x);
		if (x < 0) {
			ans2 += x;
		} else if (x > 0) {
			ans1 += x;
		}
	}
	if (ans1 != 0 && ans2 != 0) {
		printf("%lld %lld\n", ans1, ans2);
	} else {
		if (ans1 == 0 && ans2 == 0) {
			printf("no positive number no negative number\n");
			
		} else if (ans1 == 0) {
			printf("no positive number %lld\n", ans2);
		} else {
			printf("%lld no negative number\n", ans1);
		}
	}
	return 0;
}