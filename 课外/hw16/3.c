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
    struct Node *lst = head;
    while (n != -1) {
        struct Node *p = (struct Node *) malloc(sizeof(struct Node));
        p -> v = n;
        p -> nxt = NULL;
        lst -> nxt = p;
        lst = p;
        scanf("%d", &n);
    }
    struct Node *p = head -> nxt;
    lst = head;
    while (p != NULL) {
        if (p -> v & 1) {
            lst = p;
            p = p -> nxt;
        } else {
            lst -> nxt = p -> nxt;
            struct Node *tmp = p;
            p = p -> nxt;
            free(tmp);
        }
    }
    for (p = head -> nxt; p != NULL; p = p -> nxt) {
        if (p -> nxt != NULL) {
            printf("%d ", p -> v);
        } else {
            printf("%d\n", p -> v);
        }
    }
    return 0;
}