ST* MaxST(ST d[],int n,int k) {
    double mx = 0; int id = -1;
    for (int i = 0; i < n; ++i) {
        if (d[i].gender == k) {
            if (d[i].scored > mx) {
                mx = d[i].scored;
                id = i;
            }
        }
    }
    if (id == -1) {
        return NULL;
    }
    return &d[id];
}