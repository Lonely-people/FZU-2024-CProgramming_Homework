#include <stdio.h>
typedef long long ll;

const int mod = 114514;

ll fp(int a, int b) {
	ll t = 1;
	for (; b; b >>= 1, a = 1ll * a * a % mod) {
		if (b & 1) {
			t = 1ll * a * t % mod;
		}
	}
	return t;
}

int main() {
	int n, k; scanf("%d%d", &n, &k);
	ll ans = 0;
	for (int i = 1; i <= n; ++i) {
		ans += fp(i, k);
		ans %= mod;
	}
	printf("%lld\n", ans);
	return 0;
}