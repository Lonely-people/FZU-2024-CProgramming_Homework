#include <stdio.h>
#include <math.h>

int main() {
	int n, m; scanf("%d%d", &n, &m);
	if (n > m) {
		if (n % (m + 1) == 0) {
			puts("Second win");
		} else {
			puts("First win");
		}
	} else {
		puts("First win");
	}
	return 0;
}