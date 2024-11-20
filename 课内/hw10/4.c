double f( int n, double a[], double x ) {
    double res = 0, xx = 1;
    for (int i = 0; i <= n; ++i) {
        res += a[i] * xx;
        xx *= x;
    }
    return res;
}