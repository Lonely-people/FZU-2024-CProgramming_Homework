#include <stdio.h>

int abs(int x) {
	return x < 0 ? -x : x;
}

int main() {
	int n, p, t; scanf("%d%d%d", &n, &p, &t);
	long long sum = 0;
	int lst = p, cnt = 0;
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		if (abs(x - lst) <= t) {
			++cnt;
			sum += abs(x - lst);
			lst = x;
		}
	}
	printf("%d %lld\n", cnt, sum);
	return 0;
}