char *str_cat( char *s, char *t ) {
    int n = strlen(s), m = strlen(t);
    for (int i = n, j = 0; j < m; ++i, ++j) {
        s[i] = t[j];
    }
    s[n + m] = '\0';
    return s;
}