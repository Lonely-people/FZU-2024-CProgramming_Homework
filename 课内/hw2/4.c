#include <stdio.h>

int main() {
	int a, b; char c;
	scanf("%d %c %d", &a, &c, &b);
	if (c == '+') {
		printf("%d\n", a + b);
	} else if (c == '-') {
		printf("%d\n", a - b);
	} else if (c == '*') {
		printf("%lld\n", 1ll * a * b);
	} else if (c == '/') {
		if (b == 0) {
			printf("Error\n");
		} else {
			printf("%lf\n", (double)a / b);
		}
	} else if (c == '%') {
		if (b == 0) {
			printf("Error\n");
		} else {
			printf("%d\n", a % b);
		}
	} else {
		printf("Error\n");
	}
	return 0;
}