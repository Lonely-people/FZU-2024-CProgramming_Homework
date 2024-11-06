#include <stdio.h>

int main() {
	int sum = 0, mx = 0, mn = 1e9;
	for (int i = 1; i <= 6; ++i) {
		int x; scanf("%d", &x);
		sum += x;
		mx = x > mx ? x : mx;
		mn = x < mn ? x : mn;
	}
	printf("%d\n", sum - mx - mn);
	return 0;
}