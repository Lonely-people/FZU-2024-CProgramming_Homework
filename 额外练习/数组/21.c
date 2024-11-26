#include <stdio.h>

const int dir[9][2] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 0}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
int b[1010][1010];
char s[1010][1010];

int main() {
    int n, m;
    if (scanf("%d%d", &n, &m) == EOF) {
        return 0;
    }
    while (1) {
        for (int i = 1; i <= n; ++i) {
            scanf("%s", s[i] + 1);
        }
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= m; ++j) {
                if (s[i][j] == '*') {
                    printf("*");
                } else {
                    int cnt = 0;
                    for (int k = 0; k < 9; ++k) {
                        int nx = i + dir[k][0], ny = j + dir[k][1];
                        if (nx >= 1 && nx <= n && ny >= 1 && ny <= m && s[nx][ny] == '*') {
                            ++cnt;
                        }
                    }
                    printf("%d", cnt);
                }
            }
            puts("");
        }
        if (~scanf("%d%d", &n, &m)) {
            puts("");
        } else {
            break;
        }
    }
    return 0;
}