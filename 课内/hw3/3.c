#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
		int ok = 0;
		while (n) {
			if (n % 10 == 4) {
				ok = 1;
				break;
			}
			n /= 10;
		}
		if (ok) {
			puts("panta!");
		} else {
			puts("1");
		}
	} else {
		puts("0");
	}
	return 0;
}