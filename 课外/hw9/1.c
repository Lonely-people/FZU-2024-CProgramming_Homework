#include <stdio.h>
#include <string.h>

char s[100];

int main() {
	// scanf("%s", s + 1);
    gets(s + 1);
	int n = strlen(s + 1);
	for (int i = 1; i < n; ++i) {
		int p = i;
		for (int j = i + 1; j <= n; ++j) {
			if (s[j] < s[p]) {
				p = j;
			}
		}
		char t = s[i];
		s[i] = s[p];
		s[p] = t;
	}
	char lst = s[1];
	putchar(s[1]);
	for (int i = 2; i <= n; ++i) {
		if (s[i] == lst) {
			continue;
		}
		putchar(s[i]);
		lst = s[i];
	}
	puts("");
	return 0;
}