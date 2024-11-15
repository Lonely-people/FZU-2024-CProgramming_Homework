#include <stdio.h>
#include <string.h>

char s[1010];

int main() {
	int n; scanf("%d", &n);
	for (int i = 1; i <= n; ++i) {
		scanf("%s", s + 1);
		int len = strlen(s + 1);
		int ok = 0;
		for (int j = 1; j <= len / 2; ++j) {
			if (s[j] != s[len - j + 1]) {
				ok = 1;
				break;
			}
		}
		if (!ok) {
			puts(s + 1);
		}
	}
	return 0;
}