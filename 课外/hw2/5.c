#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int p = n * 7, q = 15 + n * 5;
	printf("%d\n", p > q ? q : p);
	return 0;
}