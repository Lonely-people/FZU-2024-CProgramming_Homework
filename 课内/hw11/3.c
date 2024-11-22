void dectobin( int n ) {
    if (n == 0) {
        printf("0");
        return;
    }
    if (n == 1) {
        printf("1");
        return;
    }
    dectobin(n / 2);
    printf("%d", n % 2);
}