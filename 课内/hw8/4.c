#include <stdio.h>

int cnt[10010];

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= 1000; ++i) {
		cnt[i] = 0;
	}
	for (int i = 1; i <= n; ++i) {
		int k; scanf("%d", &k);
		for (int j = 1; j <= k; ++j) {
			int x; scanf("%d", &x);
			++cnt[x];
		}
	}
	int mx = 0, mxid = 0;
	for (int i = 1; i <= 1000; ++i) {
		if (cnt[i] > mx) {
			mx = cnt[i];
			mxid = i;
		} else if (cnt[i] == mx && i > mxid) {
			mxid = i;
		}
	}
	printf("%d %d\n", mxid, mx);
	return 0;
}