#include <stdio.h>
typedef long long ll;

int main() {
	ll n, a, b; scanf("%lld%lld%lld", &n, &a, &b);
	ll sum1 = 0, sum2 = 0;
	for (int i = 1; i <= n; ++i) {
		ll x, y, p; scanf("%lld%lld%lld", &x, &y, &p);
		if(a * x + b < y) {
			sum1 += p;
		} else if (a * x + b > y) {
			sum2 += p;
		}
	}
	if (sum1 > sum2) {
		puts("_RiverLoong is richer.");
	} else if (sum1 < sum2) {
		puts("Anani_leaf is richer.");
	} else {
		puts("They are as rich as each other.");
	}
	printf("%lld %lld\n", sum1, sum2);
	return 0;
}