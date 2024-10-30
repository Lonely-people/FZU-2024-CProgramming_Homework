#include <stdio.h>

int main() {
	int n; scanf("%d", &n);
	int f[8] = {1, 2, 0, 2, 2, 1, 0, 1};
	if (f[n % 8] == 0) {
		puts("YES");
	} else {
		puts("NO");
	}
	return 0;
}