void fun (char *s, char *t) {
    int n = 0;
    while (s[n] != '\0') {
        ++n;
    }
    int tp = 0;
    for (int i = n - 1; i >= 0; i--) {
        t[tp++] = s[i];
    }
    for (int i = 0; i < n; ++i) {
        t[tp++] = s[i];
    }
    t[tp] = '\0';
}