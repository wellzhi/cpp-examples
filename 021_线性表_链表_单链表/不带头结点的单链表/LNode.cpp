#include "stdio.h"
#include "iostream"

// 不带头结点的单链表
// 定义单链表节点类型
typedef struct LNode {
    // 每个节点存放一个数据元素
    ElemType data;
    // 指针指向下一个节点
    struct LNode *next;
} LNode, *LinkList;

// 初始化一个空的单链表
bool InitList(LinkList &L) {
    // 空表，暂时还没有任何节点
    L = NULL;
    return true;
}

bool ListInsert(LinkList &L, int i, ELemType e) {
    if (i < 1)
        return false;

    // 不带头结点的单链表，初始化之时并没有头结点，位序为1的时候，插入再构造第一个节点
    if (i == 1) {
        LNode *s = (LNode *) malloc(sizeof(LNode));
        s->data = e;
        s->next = L;
        // 头指针指向新节点
        L = s;
        return true;
    }

    // 指针p指向当前扫描到的节点
    LNode *p;
    // 当前指针p指向的是第几个结点
    int j = 1;
    // p指向第1个节点（注意：不是头结点）
    p = L;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }

    if (p == NULL) {
        return false;
    }

    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

bool Empty(LinkList L) {
    return L == NULL;
}

void main() {
    LinkList L;

    InitList(L);
}
