#include <iostream>

typedef struct LNode {
    int data;
    struct LNode *next;
} LNode, *LinkList;

bool InitList(LinkList &L) {
    L = (LNode *) malloc(sizeof(LNode));
    if (L == NULL) { // 内存不足
        return false;
    }
    L->next = NULL;
    return true;
}

bool Empty(LinkList L) {
    return (L->next == NULL);
}

int main() {
    LinkList L;
    InitList(L);
    printf("", Empty(L));
}

//在第i个位置（位序）插入元素e（带头结点）
bool ListInsert(LinkList &L, int i, int e) {
    if (i < 1) {
        return false;
    }
    LNode *p;  // 指针p指向当前扫描的结点
    p = L; // L指向头结点，头结点是第0个结点（不存数据）
    int j = 0; // 当前p指向的是第几个结点
    while (p != NULL && j < i - 1) { // 循环找到第i-1个结点
        p = p->next;
        j++;
    }
    if (p == NULL) { // i值不合法
        return false;
    }
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}


