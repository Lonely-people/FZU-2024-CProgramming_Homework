#include <stdio.h>

int main() {
	int a, b, c; scanf("%d:%d:%d", &a, &b, &c);

	if (a >= 19 && a <= 24) {
		printf("+%02d:%02d:%02d\n", a - 19, b, c);
	}
	if (a >= 0 && a < 7) {
		printf("+%02d:%02d:%02d\n", a - 19 + 24, b, c);
	}
	if ((a >= 7 && a < 19) && b != 0 && c != 0) {
		printf("-%02d:%02d:%02d", 19 - a - 1, 60 - b - 1, 60 - c);
	}
	if ((a >= 7 && a < 19) && b != 0 && c == 0) {
		printf("-%02d:%02d:%02d", 19 - a - 1, 60 - b, 0);
	}
	if ((a >= 7 && a < 19) && b == 0 && c != 0) {
		printf("-%02d:%02d:%02d", 19 - a - 1, 59, 60 - c);
	}
	if ((a > 7 && a < 19) && b == 0 && c == 0) {
		printf("-%02d:%02d:%02d", 19 - a, 0, 0);
	}
	return 0;
}