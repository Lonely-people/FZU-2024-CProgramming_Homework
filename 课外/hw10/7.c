int narcissistic( int number ) {
    int res = 0, tmp = number, n = 0;
    while (tmp) {
        tmp /= 10;
        ++n;
    }
    tmp = number;
    while (tmp) {
        int p = 1;
        for (int i = 1; i <= n; ++i) {
            p *= tmp % 10;
        }
        res += p;
        tmp /= 10;
    }
    if (res == number) {
        return 1;
    }
    return 0;
}
void PrintN( int m, int n ) {
    for (int i = m + 1; i < n; ++i) {
        if (narcissistic(i)) {
            printf("%d\n", i);
        }
    }
}