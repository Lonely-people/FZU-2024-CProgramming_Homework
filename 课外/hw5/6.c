#include <stdio.h>

int main() {
	int x; scanf("%d", &x);
	int cnt = 0;
	for (int i = x / 5; i; i--) {
		for (int j = x / 2; j; j--) {
			for (int k = x; k; k--) {
				if (i * 5 + j * 2 + k == x) {
					printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k);
					++cnt;
				}
			}
		}
	}
	printf("count = %d\n", cnt);
	return 0;
}