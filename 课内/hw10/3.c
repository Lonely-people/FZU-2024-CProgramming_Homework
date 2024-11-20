void  fun(int a[], int  n) {
    for (int i = 0; i < n - 1; ++i) {
        int p = i;
        for (int j = i + 1; j < n; ++j) {
            if (a[j] < a[p]) {
                p = j;
            }
        }
        int t = a[i];
        a[i] = a[p];
        a[p] = t;
    }
}