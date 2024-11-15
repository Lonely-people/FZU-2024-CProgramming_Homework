#include <stdio.h>
#include <string.h>

char s[500010], t[500010];

int main() {
	gets(s + 1);
	int n = strlen(s + 1);
	int cnt = 0;
	for (int i = 1; i <= n && s[i] == ' '; ++i) {
		++cnt;
	}
	int p = 0;
	for (int i = n; i >= 1; ) {
		if (s[i] != ' ') {
			p = 0;
			while (s[i] != ' ' && i >= 1) {
				t[++p] = s[i--];
			}
			for (int j = p; j >= 1; j--) {
				putchar(t[j]);
			}
			if (cnt != i) {
				putchar(' ');
			}
		} else {
			--i;
		}
	}
	return 0;
}