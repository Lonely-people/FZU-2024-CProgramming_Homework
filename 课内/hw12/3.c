double price(double x) {
    double ans; static double xx;
    xx += x;
    if (xx < 5000) {
        ans += 0.01 * xx;
    } else if (xx < 10000) {
        ans += 0.05 * xx;
    } else {
        ans += 0.1 * xx;
    }
    return ans;
}