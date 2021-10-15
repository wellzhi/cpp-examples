#include "stdio.h"
#include "iostream"

// 定义链式队列结点
typedef struct LinkNode {
    ElemType data;
    struct LinkNode *next;
} LinkNode;

// 定义链式队列
typedef struct {
    LinkNode *front, *rear;
} LinkQueue;

// 初始化链式队列（带头结点）
void InitQueue(LinkQueue &Q) {
    // 初始化时，front、rear都指向头结点
    Q.front = Q.rear = (LinkNode *) malloc(sizeof(LinkNode));
    Q.front->next = NULL;
}

// 新元素入队（带头结点）
void EnQueue(LinkQueue &Q, ElemType x) {
    LinkNode *s = (LinkNode *) malloc(sizeof(LinkNode));
    s->data = x;
    s->next = NULL;
    Q.rear->next = s; // // 将新结点插入到rear结点之后
    Q.rear = s; // 修改表尾rear指针
}

// 队头元素出队（带头结点）
bool DeQueue(LinkQueue &Q, ElemType &x) {
    if (Q.front == Q.rear) {
        // 空队列
        return false;
    }
    LinkNode *p = Q.front->next;
    x = p->data; // 用变量x返回队头元素
    Q.front->next = p->next; // 修改头结点的next指针
    if (Q.rear == p) { // 此次是最后一个结点出队
        Q.rear = Q.front; // 修改rear指针
    }
    free(p);  // 释放出队结点空间
    return true;
}

// 判断队列是否为空
bool IsEmpty(LinkQueue Q) {
    if (Q.front == Q.rear) {
        return true;
    } else {
        return false;
    }
}

void testLinkQueue() {
    LinkQueue Q;
    InitQueue(Q);
}