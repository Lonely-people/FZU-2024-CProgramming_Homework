#include <stdio.h>

int main() {
	int l, r; scanf("%d%d", &l, &r);
	int ans1 = 0, ans2 = 0;
	for (int i = l; i <= r; ++i) {
		if (i & 1) {
			ans1 += i * i;
		} else {
			ans2 += i * i * i;
		}
	}
	printf("%d %d\n", ans1, ans2);
	return 0;
}