int fun(int w) {
    int t = 1, res = 0;
    while (w) {
        if (w > 10) {
            res += w % 10 * t;
            t *= 10;
        }
        w /= 10;
    }
    return res;
}