#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	for (int i = n * 2 - 1; i >= 1; i -= 2) {
		for (int j = 1; j <= (n * 2 - 1 - i) / 2; ++j) {
			putchar(' ');
		}
		for (int j = 1; j <= i; ++j) {
			putchar('#');
		}
		puts("");
	}
	for (int i = 3; i <= n * 2 - 1; i += 2) {
		for (int j = 1; j <= (n * 2 - 1 - i) / 2; ++j) {
			putchar(' ');
		}
		for (int j = 1; j <= i; ++j) {
			putchar('#');
		}
		puts("");
	}
	return 0;
}