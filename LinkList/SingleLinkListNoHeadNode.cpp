#include <iostream>

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

bool InitList(LinkList &L) {
    L = NULL;
    return true;
}

bool Empty(LinkList L) {
    return (L == NULL);
}

int main() {
    LinkList L;

    InitList(L);
    printf("",Empty(L));
}


