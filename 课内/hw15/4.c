void calc(struct student *p,int n) {
    for (int i = 0; i < 5; ++i) {
        float sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += p[i].score[j];
        }
        p[i].sum = sum;
    }
}

void sort(struct student *p,int n) {
    for (int i = 0; i < 4; ++i) {
        int t = i;
        for (int j = i + 1; j < 5; ++j) {
            if (p[j].sum > p[t].sum) {
                t = j;
            }
        }
        struct student tmp = p[i];
        p[i] = p[t];
        p[t] = tmp;
    }
}