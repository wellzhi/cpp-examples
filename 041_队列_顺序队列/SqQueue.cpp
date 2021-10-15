#include "stdio.h"
#include "iostream"

#define MaxSize 10;  // 定义队列中元素的最大个数
typedef struct {
    ElemType data[MaxSize]; // 用静态数组存放队列元素
    int front, rear; // 队头指针和队尾指针
} SqQueue;

/**
 * 初始化队列
 */
void InitQueue(SqQueue $Q) {
    // 初始化时，队头队尾指向0
    Q.rear = Q.front = 0;
}

/**
 * 判断队列是否为空
 */
bool QueueEmpty(SqQueue Q) {
    if (Q.rear == Q.front) {
        return true;
    } else {
        return false;
    }
}

/**
 * 入队
 * @param Q  队列
 * @param x 入队元素
 * @return
 */
bool EnQueue(SqQueue &Q, ElemType x) {
    if ((Q.rear + 1) % MaxSize==Q.front){ // 注意判断条件：判断队满了
        // 队列满了,则报错
        return false;
    }
    Q.data[Q.rear] = x; // 新元素插入队尾
    // 用模运算将存储空间在逻辑上变成了”环装“
    Q.rear = (Q.rear + 1) % MaxSize; // 队尾指针+1取模
    return true;
}

/**
 * 出队（删除队头元素，并用x返回）
 * @param Q  队列
 * @param x  用于返回对头元素的变量
 * @return
 */
bool DeQueue(SqQueue &Q, ElemType &x) {
    if (Q.rear == Q.front) {
        // 队空则报错
        return false;
    }
    x = Q.data[Q.front];
    Q.front = (Q.front + 1) % MaxSize;
    return true;
}

/**
 * 获得队头元素的值，用x返回
 * @param Q
 * @param x
 * @return
 */
bool GetHead(SqQueue &Q, ElemType &x) {
    if (Q.rear == Q.front) {
        // 队空则报错
        return false;
    }
    x = Q.data[Q.front];
    return true;

}

void testQueue() {
    SqQueue Q;
    InitSqQueue(Q);
}

