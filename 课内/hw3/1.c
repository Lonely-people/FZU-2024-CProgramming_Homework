#include <stdio.h>

int main() {
    int n; scanf("%d", &n);
    n %= 7;
    if (n == 0) {
        puts("Friday");
    } else if (n == 1) {
        puts("Saturday");
    } else if (n == 2) {
        puts("Sunday");
    } else if (n == 3) {
        puts("Monday");
    } else if (n == 4) {
        puts("Tuesday");
    } else if (n == 5) {
        puts("Wednesday");
    } else {
        puts("Thursday");
    }
    return 0;
}