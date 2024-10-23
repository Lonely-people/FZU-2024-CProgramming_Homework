#include <stdio.h>

int a[10];

int main() {
	int n; scanf("%d", &n);
	int tot = 0;
	while (n) {
		a[++tot] = n % 10;
		n /= 10;
	}
	if (a[1] != 0) {
		for (int i = 1; i <= tot; ++i) {
			printf("%d", a[i]);
		}
	} else {
		for (int i = 1; i <= tot; ++i) {
			if (a[i] != 0) {
				printf("%d", a[i]);
			}
		}
	}
	return 0;
}