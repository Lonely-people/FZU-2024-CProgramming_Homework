int factorsum( int number ) {
    int res = 0;
    for (int i = 1; i * i <= number; ++i) {
        if (number % i == 0) {
            res += i;
            if (number / i != i) {
                res += number / i;
            }
        }
    }
    return res - number;
}
void PrintPN( int m, int n ) {
    int cnt = 0;
    for (int i = m; i <= n; ++i) {
        if (factorsum(i) == i) {
            printf("%d = ", i);
            printf("%d", 1);
            for (int j = 2; j < i; ++j) {
                 if (i % j == 0) {
                     printf(" + %d", j);
                 }
            }
            puts("");
            ++cnt;
        }
    }
    if (cnt == 0) {
        puts("No perfect number");
    }
}