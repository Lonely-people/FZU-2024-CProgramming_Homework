void Shift( char s[] ) {
    int n = strlen(s);
    char a[3];
    for (int i = 0; i < 3; ++i) {
        a[i] = s[i];
    }
    for (int i = 3; i < n; ++i) {
        s[i - 3] = s[i];
    }
    for (int i = 0; i < 3; ++i) {
        s[n - 3 + i] = a[i];
    }
}