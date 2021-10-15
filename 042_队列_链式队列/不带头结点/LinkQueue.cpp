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

// 初始化链式队列（不带头结点）
void InitQueue(LinkQueue &Q) {
    // 初始化时，front、rear都指向NULL
    Q.front = NULL;
    Q.rear = NULL;
}

// 新元素入队（不带头结点）
void EnQueue(LinkQueue &Q, ElemType x) {
    LinkNode *s = (LinkNode *) malloc(sizeof(LinkNode));
    s->data = x;
    s->next = NULL;
    if (Q.front == NULL) { // 在空队列中插入第一个元素
        Q.front = s; // 修改队头指针
        Q.rear = s;  // 修改队尾指针
    } else {
        Q.rear->next = s; // 将新结点插入到rear结点之后
        Q.rear = s; // 修改rear指针
    }
}

// 队头元素出队（不带头结点）
bool DeQueue(LinkQueue &Q, ElemType &x) {
    if (Q.front == NULL) {
        // 空队列
        return false;
    }
    LinkNode *p = Q.front; // p指向此次出队的结点
    x = p->data; // 用变量x返回队头元素
    Q.front = p->next; // 修改front指针为出队结点的下一个结点
    if (Q.rear == p) { // 此次是最后一个结点出队
        Q.front = NULL; // front指针指向NULL
        Q.rear = NULL; // rear指针指向NULL
    }
    free(p); // 释放出队结点空间
    return true;
}


// 判断队列是否为空
bool IsEmpty(LinkQueue Q) {
    if (Q.front == NULL) {
        return true;
    } else {
        return false;
    }
}

void testLinkQueue() {
    LinkQueue Q;
    InitQueue(Q);
}