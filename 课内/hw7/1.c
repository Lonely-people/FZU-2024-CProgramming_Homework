#include <stdio.h>

int main() {
	int f[13];
	f[1] = 1, f[2] = 1;
	for (int i = 3; i <= 12; ++i) {
		f[i] = f[i - 1] + f[i - 2];
	}
	for (int i = 1; i <= 12; ++i) {
		printf("%6d", f[i]);
		if (i % 3 == 0) {
			puts("");
		}
	}
	return 0;
}