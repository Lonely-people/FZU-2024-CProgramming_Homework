#include <stdio.h>
typedef long long ll;

int main() {
	ll n; scanf("%lld", &n);
	ll ans = 0;
	for (ll i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			ans += i;
			if (n / i != i) {
				ans += n / i;
			}
		}
	}
	printf("%lld\n", ans);
	return 0;
}