#include <stdio.h>
#include <string.h>

char s[1010];

int main() {
	scanf("%s", s + 1);
	int n = strlen(s + 1);
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		if (s[i] >= '0' && s[i] <= '9') {
			ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}