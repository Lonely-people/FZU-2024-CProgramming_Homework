#include <stdio.h>
#include <stdlib.h>

struct Node {
    int v;
    struct Node *nxt;
};

void solve() {
    int n;
    scanf("%d", &n);
    struct Node *head = (struct Node *) malloc(sizeof(struct Node));
    struct Node *lst = head;
    for (int i = 1; i <= n; ++i) {
        struct Node *p = (struct Node *) malloc(sizeof(struct Node));
        p -> v = i;
        p -> nxt = NULL;
        lst -> nxt = p;
        lst = p;
    }
    int cnt = n, o = 0;
    while (cnt > 3) {
        if (!o) {
            int tmp = 2;
            struct Node *lst = head;
            struct Node *p = head -> nxt;
            while (p != NULL) {
                if (tmp == 1) {
                    lst -> nxt = p -> nxt;
                    struct Node *tp = p;
                    p = p -> nxt;
                    free(tp);
                    --cnt;
                    tmp = 2;
                    continue;
                }
                --tmp;
                lst = p;
                p = p -> nxt;
            }
        } else {
            int tmp = 3;
            struct Node *lst = head;
            struct Node *p = head -> nxt;
            while (p != NULL) {
                if (tmp == 1) {
                    lst -> nxt = p -> nxt;
                    struct Node *tp = p;
                    p = p -> nxt;
                    free(tp);
                    --cnt;
                    tmp = 3;
                    continue;
                }
                --tmp;
                lst = p;
                p = p -> nxt;
            }
        }
        o ^= 1;
    }
    for (struct Node *p = head -> nxt; p != NULL; p = p -> nxt) {
        if (p -> nxt == NULL) {
            printf("%d\n", p -> v);
        } else {
            printf("%d ", p -> v);
        }
    }
}

int main() {
    int T; scanf("%d", &T);
    while (T--) {
        solve();
    }
    return 0;
}