#include <stdio.h>
#include <string.h>

int cnt[200];

int main() {
	for (int i = 0; i < 200; ++i) {
		cnt[i] = 0;
	}
	char ch = getchar();
	while (ch != '\n') {
		++cnt[ch];
		ch = getchar();
	}
	ch = getchar();
	printf("%d\n", cnt[ch]);
	return 0;
}