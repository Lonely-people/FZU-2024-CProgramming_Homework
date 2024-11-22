void printdigits( int n ) {
    static int a[1000];
    int tp = 0;
    if (n == 0) {
        printf("0\n");
        return;
    }
    while (n) {
        a[++tp] = n % 10;
        n /= 10;
    }
    for (int i = tp; i >= 1; i--) {
        printf("%d\n", a[i]);
    }
}