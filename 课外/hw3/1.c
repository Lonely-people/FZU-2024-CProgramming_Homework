#include <stdio.h>

int main() {
	int a[5]; scanf("%d%d%d%d%d", &a[0], &a[1], &a[2], &a[3], &a[4]);
	int ans1 = 0, ans2 = 0;
	for (int i = 0; i < 5; ++i) {
		if (a[i] & 1) {
			ans1 += a[i] * a[i];
		} else {
			ans2 += a[i] * a[i];
		}
	}
	if (ans1 != 0 && ans2 != 0) {
		printf("%d\n%d\n", ans1, ans2);
	} else {
		if (ans1 == 0) {
			puts("No Odd Number");
			printf("%d\n", ans2);
		} else {
			printf("%d\n", ans1);
			puts("No Even Number");
		}
	}
	return 0;
}