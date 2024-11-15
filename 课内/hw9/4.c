#include <stdio.h>
#include <string.h>

char s[40], tmp[10];

int main() {
	scanf("%s", s + 1);
	int p = 0;
	for (int i = 1; i <= 32; ++i) {
		tmp[++p] = s[i];
		if (i % 8 == 0 && i != 32) {
			int t = 0;
			for (int j = 1; j <= p; ++j) {
				t += (tmp[j] - '0') * (1 << (p - j));
			}
			printf("%d.", t);
			p = 0;
		}
	}
	int t = 0;
	for (int j = 1; j <= p; ++j) {
		t += (tmp[j] - '0') * (1 << (p - j));
	}
	printf("%d\n", t);
	return 0;
}