#include <stdio.h>

int main() {
	int x; scanf("%d", &x);
	if (x & 1) {
		printf("y=%d\n", x * 3);
	} else {
		printf("y=%d\n", x * 2);
	}
	return 0;
}