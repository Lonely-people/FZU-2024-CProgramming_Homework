#include <stdio.h>

int main() {
	int a, b; scanf("%d%d", &a, &b);
	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d / %d = %d\n", a, b, a / b);
	printf("%d ", a);
	putchar('%');
	printf(" %d = %d\n", b, a % b);
	return 0;
}