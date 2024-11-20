#include <stdio.h>

int check(int x) {
    if (x == 0) {
        return 1;
    }
    int tmp = x * x, t = 1, res = 0;
    while (tmp) {
        res += tmp % 10 * t;
        t *= 10;
        if (res == x) {
            return 1;
        }
        tmp /= 10;
    }
    return 0;
}

int main() {
    int a, b; scanf("%d%d", &a, &b);
    int cnt = 0;
    for (int i = a; i <= b; ++i) {
        if (check(i)) {
            printf("%d\n", i);
            ++cnt;
        }
    }
    if (cnt == 0) {
        puts("None");
    }
    return 0;
}