float fun(int a[],int n,int *max,int *min) {
    float sum = 0;
    *max = 0, *min = 1e9;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
        if (a[i] > *max) {
            *max = a[i];
        }
        if (a[i] < *min) {
            *min = a[i];
        }
    }
    return sum / (1.0 * n);
}