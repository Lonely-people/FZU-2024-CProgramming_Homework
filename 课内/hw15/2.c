struct student fun(struct student  *std, char  *num) {
    struct student res;
    for (int i = 0; i < 8; ++i) {
        if (strcmp(std[i].num, num) == 0) {
            res = std[i];
            return res;
        }
    }
    res.num[0] = '\0', res.year = 0, res.month = 0, res.day = 0;
    return res;
}