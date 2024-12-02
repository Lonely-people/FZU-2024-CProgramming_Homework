void delnum(char *s) {
    int j = 0;
    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] >= '0' && s[i] <= '9') {
            continue;
        } else {
            s[j] = s[i];
            ++j;
        }
    }
    s[j] = '\0';
}