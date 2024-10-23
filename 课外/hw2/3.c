#include <stdio.h>

const int day[13] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int y, m, d; scanf("%d/%d/%d", &y, &m, &d);
	int ans = 0;
	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
		for (int i = 0; i < m - 1; ++i) {
			if (i == 1) {
				ans += day[i] + 1;
			} else {
				ans += day[i];
			}
		}
		ans += d;
	} else {
		for (int i = 0; i < m - 1; ++i) {
			ans += day[i];
		}
		ans += d;
	}
	printf("%d\n", ans);
	return 0;
}