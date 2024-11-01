#include <stdio.h>

int a[100];

int main() {
	char c; int p = 0, cnt = 0;
	while (c != '.') {
		c = getchar();
		if (c == ' ') {
			if (cnt != 0) {
				a[++p] = cnt;
			}
			cnt = 0;
		} else {
			++cnt;
		}
	}
	if (cnt - 1 != 0) {
		a[++p] = cnt - 1;
	}
	for (int i = 1; i <= p; ++i) {
		printf("%d%c", a[i], " \n"[i == p]);
	}
	return 0;
}