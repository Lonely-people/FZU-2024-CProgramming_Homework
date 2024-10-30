#include <stdio.h>
typedef long long ll;

int main() {
	int n; scanf("%d", &n);
	ll ans = 1;
	for (int i = 2; i <= n; ++i) {
		ans = 1ll * i * ans;
	}
	printf("%lld\n", ans);
	return 0;
}