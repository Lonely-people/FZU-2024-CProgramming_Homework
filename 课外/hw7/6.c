#include <stdio.h>

void solve() {
	long long n; scanf("%lld", &n);
	if (n >= 2018) {
		puts("0");
	} else {
		long long ans = 1;
		for (int i = 2; i <= n; ++i) {
			ans = 1ll * i * ans % 2018;
		}
		printf("%lld\n", ans);
	}
}

int main() {
	int T; scanf("%d",&T);
	while (T--) {
		solve();
	}
	return 0;
}