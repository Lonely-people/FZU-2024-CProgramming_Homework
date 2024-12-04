void strmcpy( char *t, int m, char *s ) {
    int tp = 0;
    for (int i = m - 1; t[i] != '\0'; ++i) {
        s[tp++] = t[i];
    }
    s[tp] = '\0';
}