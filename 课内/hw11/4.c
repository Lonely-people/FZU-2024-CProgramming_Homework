void hollowPyramid( int n ) {
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= n - i; ++j) {
            printf(" ");
        }
        printf("%d", i);
        if (i == 1) {
            puts("");
            continue;
        }
        for (int j = 1; j <= 2 * i - 3; ++j) {
            printf(" ");
        }
        printf("%d\n", i);
    }
    for (int i = 1; i <= 2 * n - 1; ++i) {
        printf("%d", n);
    }
    puts("");
}