#include <stdio.h>

int main() {
	int p; scanf("%d", &p);
	for (int i = 1; i <= 1000; ++i) {
		for (int j = 1; j <= 1000; ++j) {
			if (p == i * i * i - j * j * j) {
				puts("YES");
				return 0;
			}
		}
	}
	puts("NO");
	return 0;
}