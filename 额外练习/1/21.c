#include <stdio.h>

int check(int x) {
	long long sum = 0;
	int p = x;
	while (p) {
		int y = p % 10;
		sum += 1ll * y * y * y;
		p /= 10;
	}
	if (sum == x) {
		return 1;
	}
	return 0;
}

int main() {
	int l, r; scanf("%d%d", &l, &r);
	if (r < l) {
		int t = r;
        r = l, l = t;
	}
	int cnt = 0;
	for (int i = l; i <= r; ++i) {
		if (check(i)) {
			++cnt;
		}
	}
	printf("%d\n", cnt);
	return 0;
}