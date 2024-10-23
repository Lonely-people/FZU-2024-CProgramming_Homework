#include <stdio.h>

int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
	int y, m, d; scanf("%d/%d/%d", &y, &m, &d);
	if (m < 1 || m > 12) {
		puts("No");
	} else {
		if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
			++day[1];
		}
		if (d < 1 || d > day[m - 1]) {
			puts("No");
		} else {
			puts("Yes");
		}
	}
	return 0;
}