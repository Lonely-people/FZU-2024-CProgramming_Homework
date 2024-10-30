#include <stdio.h>

int main() {
	int x, n; scanf("%d%d", &x, &n);
	int ok = 0;
	for (int i = 1; i <= n; ++i) {
		int y; scanf("%d", &y);
		if (y < 0) {
			puts("Game Over");
			return 0;
		}
		if (y == x) {
			if (i == 1) {
				puts("Bingo!");
			} else if (i <= 3) {
				puts("Lucky You!");
			} else {
				puts("Good Guess!");
			}
			return 0;
		} else if (y < x) {
			puts("Too small");
		} else {
			puts("Too big");
		}
	}
	puts("Game Over");
	return 0;
}