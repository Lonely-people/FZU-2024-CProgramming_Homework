#include <stdio.h>
#include <string.h>

int a[1000010], b[1010][1010];
char s[1000010];

int main() {
    int n; scanf("%d\n", &n);
    for (int i = 1; i <= n; ++i) {
        gets(s + 1);
        int tp = strlen(s + 1);
        for (int j = 1; j <= tp; ++j) {
            if (s[j] == 'H') {
                s[j] = 'F';
            }
            if (s[j] == 'h') {
                s[j] = 'f';
            }
        }
        for (int j = 1; j <= tp; ++j) {
            putchar(s[j]);
        }
        if (i != n) {
            puts("");
            puts("");
        }
    }
    return 0;
}