#include "stdio.h"
#include "iostream"

// 带头结点的单链表
// 定义单链表结点类型
typedef struct LNode {
    // 每个节点存放一个数据元素
    ElemType data;
    // 指针指向下一个节点
    struct LNode *next;
} LNode, *LinkList;

// 初始化一个单链表（带头结点）
bool InitList(LinkList &L) {
    // 分配一个头结点
    L = (LNode *) malloc(sizeof(LNode));
    if (L == NULL) {
        // 内存不足，分配失败
        return false;
    }
    // 头结点之后暂时还没有节点
    L->next = NULL;
    return true;
}

/**
 * 再第i个位置（位序从1计数）插入元素e（带头结点）
 */
bool ListInsert(LinkList &L, int i, ElemType e) {
    if (i < 1) {
        // 位序小于1，非法
        return false;
    }
    // 指针p指向当前扫描到的节点
    LNode *p;
    // 当前p指针指向的是第几个结点
    int j = 0;
    // L指针指向头结点，头结点是第0个节点（不存在数据）
    p = L;
    // 循环找到插入位置前的节点
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }

    if (p == NULL) {
        // i值不合法（位序i超出链表长度了）
        return false;
    }

    // 为待插入元素构造结点s
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    // 将结点s链接到p之后
    p->next = s;
    return true;
}

/**
 * 在p结点之后插入元素e
 * @param p 指定结点
 * @param e 新插入结点
 * @return
 */
bool InsertNextNode(LNode *p, ELemType e) {
    if (p == NULL) {
        return false;
    }
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->data = e;
    s->next = p->next;
    p->next = s;
    return true;
}

/**
 * 在p结点之前插入元素e （偷天换日，对p->data,p->next进行插入元素替换）
 * @param p 指定结点
 * @param e 新插入结点
 * @return
 */
bool InsertPriorNode(LNode *p, ElemType e) {
    if (p == NULL) {
        return false;
    }
    LNode *s = (LNode *) malloc(sizeof(LNode));
    s->next = p->next;
    p->next = s;
    s->data = p->data;
    p->data = e;
    return true;
}

/**
 * 按位序删除（带头结点），并返回删除掉的元素
 * @param L  单链表（带头结点）
 * @param i 位序
 * @param e 删除元素引用（用于带回被删除的元素）
 * @return
 */
bool ListDelete(LinkList &L, int i, ElemType &e) {
    if (i < 1)
        return false;
    // 指针p指向当前扫描到的节点
    LNode *p;
    // 当前p指向的是第几个结点
    int j = 0;
    // L指向头结点，头结点是第0个元素（不存数据）
    p = L;
    while (p != NULL && j < i - 1) {
        p = p->next;
        j++;
    }
    if (p == NULL) {
        return false;
    }
    if (p->next == NULL) {
        // 第i-1个元素之后已无其他节点
        return false;
    }

    // 令q指向被删除的结点（p：被删除结点的前驱结点）
    LNode *q = p->next;
    // 用e返回被删除元素的值
    e = q->data;
    // 将*q结点从链中“断开”
    p->next = q->next;
    // 释放被删除结点的存储空间
    free(p);
    return true;
}

/**
 * 删除指定结点p（偷天换日，保留删除结点，交换数据域和指针指向，删除后继结点）
 * @param p 待删除结点
 * @return
 */
bool DeleteNode(LNode *p) {
    if (p == NULL) {
        return false;
    }
    // 令q指向*p的后继结点
    LNode *q = p->next;
    // 和后继结点交换数据域
    p->data = p->next->data;
    // 将*q结点从链中断开
    p->next = q->next;
    // 释放后继结点的存储空间
    free(q);
    return true;
}

/**
 * 按位序（从1开始）查找，返回第i个元素（带头结点）
 * @param L  单链表（带头结点）
 * @param i  位序号
 * @return
 */
LNode *GetElem(LinkList L, int i) {
    if (i < 1) {
        return NULL;
    }

    // 指针p指向当前扫描到的结点
    LNode *p;
    // 当前p指向的是第几个结点
    int j = 0;
    // L指向头结点，头结点是第0个结点（不存数据）
    p = L;
    while (p != NULL && j < i) {
        p = p->next;
        j++;
    }
    return p;
}

/**
 * 按结点值查找（按值查找）
 * @param L  单链表（带头结点）
 * @param e  待查找结点值
 * @return 找到的结点
 */
LNode *LocateElem(LinkList L, ElemType e) {
    LNode *p = L->next;
    while (p != NULL && p->data != e) {
        // 从第一个结点开始查找数据域为e的结点
        p = p->next;
    }
    // 找到后返回该结点指针，否则返回NULL
    return p;
}

/**
 * 求单链表（带头结点）的长度
 * @param L  单链表（带头结点）
 * @return
 */
int length(LinkList L) {
    int len = 0;
    LNode *p = L;
    while (p->next != NULL) {
        p = p->next;
        len++;
    }
    return len;
}

/**
 * 尾插法建立单链表（带头结点）
 * @param L
 * @return
 */
LinkList List_TailInsert(LinkList &L) {
    // 正向建立单链表
    // 设ElemType为整形
    int x;
    // 建立头结点
    L = (LinkList) malloc(sizeof(LNode));
    L->next == NULL;
    L->data == NULL;

    // r为队尾指针，初始化时指向头结点
    LNode *s, *r = L;
    scanf("%d", &x);
    // 输入9999表示结束
    while (x != 9999) {
        s = (LNode *) malloc(sizeof(LNode));
        s->data = e;
        r->next = s;
        // r指向新的表尾结点
        r = s;
        scanf("%d", &x);
    }
    // 尾结点指针置空
    r->next = NULL;
    return L;
}

/**
  * 头插法建立单链表（带头结点）
  * 头插法的重要应用：链表的逆置
 * @param L
 * @return
 */
LinkList List_HeadInsert(LinkList &L) {
    // 逆向建立单链表
    LNode *s;
    int x;
    // 建立头结点
    L = (LinkList) malloc(sizeof(LNode));
    // 初始化为空链表
    L->next = NULL;
    // 输入结点的值
    scanf("%d", &x);
    while (x != 9999) {
        // 创建新结点
        s = (LNode *) malloc(sizeof(LNode));
        S->data = x;
        s->next = L->next;
        // 将新结点s插入表中，L为头指针
        L->next = s;
        scanf("%d", &x);
    }
    return L;
}

bool Empty(LinkList L) {
    return L->next == NULL;
}

void main() {
    LinkList L;

    InitList(L);
}
