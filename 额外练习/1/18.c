#include <stdio.h>
typedef long long ll;

int main() {
	ll n; scanf("%lld", &n);
	ll cnt = 0;
	for (ll i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			++cnt;
			if (n / i != i) {
				++cnt;
			}
		}
	}
	printf("%lld\n", cnt);
	return 0;
}