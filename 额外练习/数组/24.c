#include <stdio.h>
#include <string.h>

int a[1000010], b[1010][1010];
char s[1000010];

int main() {
    scanf("%s", s + 1);
    int n = strlen(s + 1);
    a['a'] = 1, a['e'] = 1, a['i'] = 1, a['o'] = 1, a['u'] = 1;
    a['A'] = 1, a['E'] = 1, a['I'] = 1, a['O'] = 1, a['U'] = 1;
    for (int i = 1; i <= n; ++i) {
        if (a[s[i]] == 0) {
            putchar('.');
            if (s[i] >= 'A' && s[i] <= 'Z') {
                putchar(s[i] + 32);
            } else {
                putchar(s[i]);
            }
        }
    }
    puts("");
    return 0;
}