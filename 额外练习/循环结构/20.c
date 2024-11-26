#include <stdio.h>
typedef long long ll;

const int mod = 1000007;

int f[1010];

int main() {
	f[0] = 1, f[1] = 1;
	for (int i = 2; i <= 1000; ++i) {
		f[i] = (f[i - 1] + f[i - 2]) % mod;
	}
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		int x; scanf("%d", &x);
		printf("Case %d:\n%d\n", i, f[x]);
	}
	return 0;
}