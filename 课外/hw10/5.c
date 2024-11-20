int fun(char a[],char b[]) {
    int res = strcmp(a, b);
    if (res == 0) {
        return 0;
    } else if (res > 0) {
        return 1;
    } else {
        return -1;
    }
}