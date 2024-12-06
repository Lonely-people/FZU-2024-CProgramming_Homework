void bubble (int a[ ], int n) {
    int ok = 1;
    while (ok) {
        ok = 0;
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > a[i + 1]) {
                int t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
                ok = 1;
            }
        }
    }
}