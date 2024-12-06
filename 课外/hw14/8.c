#include <stdio.h>
#include <string.h>

const char s[10][10] = {"red", "blue", "yellow", "green", "black"};
char t[100];

int main() {
    scanf("%s", t);
    for (int i = 0; i < 5; ++i) {
        if (strcmp(t, s[i]) == 0) {
            printf("%d\n", i + 1);
            return 0;
        }
    }
    puts("Not Found");
    return 0;
}