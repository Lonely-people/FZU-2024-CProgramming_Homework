float fun(int n) {
    double res = 1;
    for (int i = 1; i < n; ++i) {
        res = 1.0 / (1 + res);
    }
    return res;
}