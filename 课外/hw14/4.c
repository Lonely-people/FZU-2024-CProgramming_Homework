int max_len( char *s[], int n ) {
    int res = 0;
    for (int i = 0; i < n; ++i) {
        int n = 0;
        while (s[i][n] != '\0') {
            ++n;
        }
        if (n > res) {
            res = n;
        }
    }
    return res;
}