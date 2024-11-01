#include <stdio.h>

int a[100];

int main() {
	int n, m; scanf("%d%d", &n, &m);
	int cnt = 0;
	while (n) {
		a[++cnt] = n % m;
		n /= m;
	}
	for (int i = cnt; i >= 1; i--) {
		printf("%d", a[i]);
	}
	return 0;
}