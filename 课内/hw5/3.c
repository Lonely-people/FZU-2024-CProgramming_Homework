#include <stdio.h>

int main() {
	char c = getchar();
	int cnt[4] = {0, 0, 0, 0};
	while (c != '\n') {
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
			++cnt[0];
		} else if (c == ' ') {
			++cnt[1];
		} else if (c >= '0' && c <= '9') {
			++cnt[2];
		} else {
			++cnt[3];
		}
		c = getchar();
	}
	printf("%d %d %d %d\n", cnt[0], cnt[1], cnt[2], cnt[3]);
	return 0;
}