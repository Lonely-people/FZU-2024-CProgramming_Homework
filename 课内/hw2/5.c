#include <stdio.h>

int main() {
	int a, b; char c;
	scanf("%d %d %c", &a, &b, &c);
	double ans = 0;
	if (c == 'm') {
		if (b == 90) {
			ans = 1.0 * a * 6.95 * 0.95;
		} else if (b == 93) {
			ans = 1.0 * a * 7.44 * 0.95;
		} else {
			ans = 1.0 * a * 7.93 * 0.95;
		}
	} else {
		if (b == 90) {
			ans = 1.0 * a * 6.95 * 0.97;
		} else if (b == 93) {
			ans = 1.0 * a * 7.44 * 0.97;
		} else {
			ans = 1.0 * a * 7.93 * 0.97;
		}
	}
	printf("%.2lf\n", ans);
	return 0;
}