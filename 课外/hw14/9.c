#include <stdio.h>
#include <string.h>

char s[1010], t[1010];

int main() {
    gets(s);
    int n = strlen(s);
    for (int i = 0; i < n; ++i) {
        while (i < n && s[i] == ' ') {
            ++i;
        }
        if (i >= n - 1) {
            break;
        }
        int tp = 0;
        while (i < n && s[i] != ' ') {
            t[tp++] = s[i++];
        }
        for (int j = tp - 1; j >= 0; j--) {
            putchar(t[j]);
        }
        putchar(' ');
    }
    return 0;
}