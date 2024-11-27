int fun(int array[N][M]) {
    int mx = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < M; ++j) {
            if (array[i][j] > mx) {
                mx = array[i][j];
                Row = i;
                Col = j;
            }
        }
    }
    return mx;
}