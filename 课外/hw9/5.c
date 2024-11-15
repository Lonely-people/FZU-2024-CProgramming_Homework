#include <stdio.h>
#include <string.h>

char s[10010], t[10010], p[10000010];

int main() {
	scanf("%s", p + 1);
	int len = strlen(p + 1), id = 1;
	for (int i = 1; i <= len; ++i) {
		if (p[i] == ',') {
			id = i;
			break;
		}
	}
	int n = 0;
	for (int i = 1; i < id; ++i) {
		s[++n] = p[i];
	}
	n = 0;
	for (int i = id + 1; i <= len; ++i) {
		t[++n] = p[i];
	}
	for (int i = 1; i <= n; ++i) {
		if (s[i] >= 'A' && s[i] <= 'Z') {
			s[i] += 32;
			s[i] = (s[i] - 'a' - 2 + 26) % 26 + 'a';
		} else if (s[i] >= 'a' && s[i] <= 'z') {
			s[i] -= 32;
			s[i] = (s[i] - 'A' - 2 + 26) % 26 + 'A';
		}
	}
	for (int i = 1; i <= n; ++i) {
		if (s[i] != t[i]) {
			puts("No");
			return 0;
		}
	}
	puts("Yes");
	return 0;
}