int set_grade( struct student *p, int n ) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int s = p[i].score;
        if (s >= 85) {
            p[i].grade = 'A';
        } else if (s >= 70) {
            p[i].grade = 'B';
        } else if (s >= 60) {
            p[i].grade = 'C';
        } else {
            p[i].grade = 'D';
            ++cnt;
        }
    }
    return cnt;
}