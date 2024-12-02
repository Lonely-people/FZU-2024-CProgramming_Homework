int fun(int *a,int *b,int n) {
    int mx = 0, mxid = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] > mx) {
            mx = a[i];
            mxid = i;
        }
    }
    *b = mxid;
    return mx;
}