#include <stdio.h>

int check(int x) {
	for (int i = 2; i * i <= x; ++i) {
		if (x % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int n; scanf("%d", &n);
	int p = 2, cnt = 0;
	for (int i = 2; i <= n; ++i) {
		p *= 2;
		if (check(p - 1)) {
			++cnt;
			printf("%d\n", p - 1);
		}
	}
	if (cnt == 0) {
		puts("None");
	}
	return 0;
}