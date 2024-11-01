#include <stdio.h>

int C[100][100];

int main() {
	int n, m; scanf("%d%d", &n, &m);
	if (n > m) {
		int t = n;
		n = m;
		m = t;
	}
	C[0][0] = 1;
	for (int i = 1; i <= m; ++i) {
		C[i][0] = C[i][i] = 1;
		for (int j = 1; j < i; ++j) {
			C[i][j] = (C[i - 1][j] + C[i - 1][j - 1]) % 10;
		}
	}
	for (int i = n; i <= m; ++i) {
		for(int j = m - i + 1; j > 1; j--) {
			putchar(' ');
		}
		for (int j = 0; j < i; ++j) {
			printf("%d%c", C[i - 1][j], " \n"[j == i - 1]);
		}
	}
	return 0;
}