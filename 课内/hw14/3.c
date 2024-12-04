int frequency ( char* paragraph, char* from, char* to ) {
    int res = 0;
    for (int i = 0; paragraph[i] != '\0'; ++i) {
        if (paragraph[i] == *from) {
            int ok = 1;
            for (int j = 0; j < to - from + 1; ++j) {
                if (paragraph[i + j] != *(from + j)) {
                    ok = 0;
                    break;
                }
            }
            if (ok) {
                ++res;
            }
        }
    }
    return res;
}