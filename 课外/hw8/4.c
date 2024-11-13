#include <stdio.h>

int C[30][30];

int main() {
	C[0][0] = 1;
	for (int i = 1; i <= 20; ++i) {
		C[i][0] = C[i][i] = 1;
		for (int j = 1; j < i; ++j) {
			C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
		}
	}
	int n; scanf("%d", &n);
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j <= i; ++j) {
			printf("%7d", C[i][j]);
		}
		puts("");
	}
	return 0;
}