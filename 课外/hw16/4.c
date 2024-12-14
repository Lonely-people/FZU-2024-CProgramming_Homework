#include <stdio.h>
#include <stdlib.h>

struct Node {
    int v;
    struct Node *nxt;
};

int main() {
    int n; scanf("%d", &n);
    struct Node *head = (struct Node *) malloc(sizeof(struct Node));
    head -> nxt = NULL;
    for (int i = 1; i <= n; ++i) {
        int x; scanf("%d", &x);
        struct Node *p = (struct Node *) malloc(sizeof(struct Node));
        p -> v = i;
        p -> nxt = NULL;
        if (i == 1) {
            head -> nxt = p;
            continue;
        }
        if (x == 0) {
            p -> nxt = head -> nxt;
            head -> nxt = p;
        } else {
            struct Node *q = head -> nxt;
            while (q -> v != x) {
                q = q -> nxt;
            }
            p -> nxt = q -> nxt;
            q -> nxt = p;
        }
    }
    for (struct Node *p = head -> nxt; p != NULL; p = p -> nxt) {
        if (p -> nxt == NULL) {
            printf("%d\n", p -> v);
        } else {
            printf("%d ", p -> v);
        }
    }
    return 0;
}