int compareScore(const struct Student *s1, const struct Student *s2) {
    int sum1 = s1 -> C + s1 -> English;
    int sum2 = s2 -> C + s2 -> English;
    int c1 = s1 -> C, c2 = s2 -> C;
    int e1 = s1 -> English, e2 = s2 -> English;
    if (sum1 > sum2) {
        return 1;
    } else if (sum1 < sum2) {
        return -1;
    } else {
        if (c1 > c2) {
            return 1;
        } else if (c1 < c2) {
            return -1;
        } else {
            return 0;
        }
    }
}