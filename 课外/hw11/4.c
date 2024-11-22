int max(int a[ ], int m, int n) {
    if (m == n) {
        return a[m];
    }
    int mid = (m + n) / 2;
    int vl = max(a, m, mid), vr = max(a, mid + 1, n);
    return vl > vr ? vl : vr;
}

int min(int a[ ], int m, int n) {
    if (m == n) {
        return a[m];
    }
    int mid = (m + n) / 2;
    int vl = min(a, m, mid), vr = min(a, mid + 1, n);
    return vl < vr ? vl : vr;
}