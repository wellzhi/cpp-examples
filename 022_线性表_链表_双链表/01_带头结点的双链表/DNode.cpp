#include "stdio.h"
#include "iostream"

typedef struct DNode {
    ElemType data;
    struct DNode *prior, *next; // 前指针、后指针
} DNode, *DLinkList;

bool InitDLinkList(DLinkList &L) {
    L = (DNode *) malloc(sizeof(DNode));
    if (L == NULL) {
        // 内存不足，分配失败
        return false;
    }
    L->prior = NULL;
    L->next = NULL;
    return true;
}

/**
 * 判断双链表（带头结点）是否为空
 * @return
 */
bool Empty(DLinkList L) {
    if (L->next == NULL) {
        return true;
    } else {
        return false;
    }
}

/**
 * 在p结点之后插入结点s
 * @param p
 * @param s 插入结点
 * @return
 */
bool InsertNextDNode(DNode *p, DNode *s) {
    if (p == NULL || s == NULL) {
        return false;
    }

    s->next = p->next;
    if (p->next != NULL) {
        p->next->prior = s;
    }
    s->prior = p;
    p->next = s;
    return true;
}

void main() {
    DLinkList L;
    InitDLinkList(L);
}

