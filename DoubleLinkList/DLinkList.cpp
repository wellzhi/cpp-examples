#include <iostream>

typedef struct DNode {
    int data;
    struct DNode *prior, *next;
} DNode, *DLinkList;

bool InitDLinkList(DLinkList &L) {
    L = (DNode *) malloc(sizeof(DNode));
    if (L == NULL) {
        return false;// 内存不足，分配失败
    }
    L->prior = NULL;
    L->next = NULL;
    return true;
}

bool Empty(DLinkList L) {
    if (L->next == NULL)
        return true;
    else
        return false;
}

int main() {
    DLinkList L;
    InitDLinkList(L);
    return 0;
}

/**
 * 插入结点：//在p结点之后插入s结点
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

/**
 *
 * 删除p结点的后继结点
 * @param p
 * @return
 */
bool DeleteNextDNode(DNode *p) {
    if (p == NULL) return false;
    // 找到p的后继结点q(待删除结点）
    DNode *q = p->next;
    // p没有后继结点
    if (q == NULL) return false;
    // 将p结点后继结点，修改为q结点的后继结点
    p->next = q->next;
    if (q->next != NULL) {
        // q结点不是最后一个结点
        q->next->prior = p;
    }
    // 释放结点空间
    free(q);
    return true;
}

void DestroyList(DLinkList &L) {
    while (L->next != NULL) {
        DeleteNextDNode(L);
        free(L); //释放头结点
        L = NULL;// 头指针指向NULL
    }
}
