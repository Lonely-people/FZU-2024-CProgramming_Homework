#include <stdio.h>
#include <stdlib.h>
// #include <cassert>

struct Node {
    int v;
    struct Node *pre, *nxt;
};

struct Node *head;

void L(int x) {
    struct Node *p = (struct Node *) malloc(sizeof(struct Node));
    p -> v = x;
    p -> pre = head;
    p -> nxt = head -> nxt;
    if (head -> nxt != NULL) {
        head -> nxt -> pre = p;
    }
    head -> nxt = p;
}

void R(int x) {
    struct Node *p = head;
    while (p -> nxt != NULL) {
        p = p -> nxt;
    }
    struct Node *q = (struct Node *) malloc(sizeof(struct Node));
    q -> v = x;
    q -> pre = p;
    q -> nxt = NULL;
    p -> nxt = q;
}

void D(int x) {
    struct Node *p = head -> nxt;
    while (p != NULL && p -> v != x) {
        p = p -> nxt;
    }
    p -> pre -> nxt = p -> nxt;
    free(p);
}

void IL(int k, int x) {
    struct Node *p = head;
    while (p -> nxt != NULL) {
        p = p -> nxt;
        if (p -> v == k) {
            break;
        }
    }
    // printf("%d\n", p -> v);
    struct Node *q = (struct Node *) malloc(sizeof(struct Node));
    // assert(p -> pre == head);
    q -> v = x;
    q -> nxt = p;
    struct Node *y = p -> pre;
    q -> pre = y;
    y -> nxt = q;
    y = q;
}

void IR(int k, int x) {
    struct Node *p = head;
    while (p -> nxt != NULL) {
        p = p -> nxt;
        if (p -> v == k) {
            break;
        }
    }
    struct Node *q = (struct Node *) malloc(sizeof(struct Node));
    q -> v = x;
    q -> nxt = p -> nxt;
    q -> pre = p;
    p -> nxt -> pre = q;
    p -> nxt = q;
}

int a[100010];

int main() {
    int q; scanf("%d", &q);
    head = (struct Node *) malloc(sizeof(struct Node));
    head -> nxt = NULL;
    head -> pre = NULL;
    head -> v = -1;
    int tp = 0;
    while (q--) {
        char s[10]; scanf("%s", s);
        if (s[0] == 'L') {
            int x; scanf("%d", &x);
            a[++tp] = x;
            L(x);
        } else if (s[0] == 'R') {
            int x; scanf("%d", &x);
            a[++tp] = x;
            R(x);
        } else if (s[0] == 'D') {
            int x; scanf("%d", &x);
            D(a[x]);
        } else if (s[1] == 'L') {
            int k, x; scanf("%d%d", &k, &x);
            a[++tp] = x;
            IL(a[k], x);
        } else {
            int k, x; scanf("%d%d", &k, &x);
            a[++tp] = x;
            IR(a[k], x);
        }
        // struct Node *p = head -> nxt;
        // for (; p != NULL; p = p -> nxt) {
        //     printf("%d ", p -> v);
        // }
        // puts("");
    }
    for (struct Node *p = head -> nxt; p != NULL; p = p -> nxt) {
        printf("%d ", p -> v);
    }
    return 0;
}