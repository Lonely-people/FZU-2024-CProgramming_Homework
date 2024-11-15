#include <stdio.h>
#include <string.h>

char s[100];

int main() {
	int p = 0;
	char ch = getchar();
	while (ch != '\n') {
		s[++p] = ch;
		ch = getchar();
	}
	for (int i = p; i >= 1; i--) {
		putchar(s[i]);
	}
	puts("");
	return 0;
}