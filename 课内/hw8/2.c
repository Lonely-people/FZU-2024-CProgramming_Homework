#include <stdio.h>

int main() {
	int n, m; scanf("%d%d", &n, &m);
	for (int i = 1; i <= n; ++i) {
		int sum = 0;
		for (int j = 1; j <= m; ++j) {
			int x; scanf("%d", &x);
			sum += x;
		}
		printf("%d\n", sum);
	}	
	return 0;
}