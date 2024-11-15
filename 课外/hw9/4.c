#include <stdio.h>
#include <string.h>

char s[1010];

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%s", s + 1);
		int len = strlen(s + 1);
		for (int j = len; j >= 1; j--) {
			putchar(s[j]);
		}
		puts("");
	}
	return 0;
}