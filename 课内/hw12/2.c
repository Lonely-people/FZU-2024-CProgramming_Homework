int fun (void) {
    int n; static int cnt = 0;
    while (~scanf("%d", &n)) {
        if (n < 0) {
            break;
        }
        max = n > max ? n : max;
        min = n < min ? n : min;
        total += n;
        ++cnt;
    }
    return cnt;
}