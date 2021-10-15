#include "stdio.h"
#include "iostream"

#define MaxSize 10  // 定义栈中元素的最大个数
typedef struct {
    ElemType data[MaxSize]; // 静态数组存放栈中元素
    int top;  // 栈顶指针
} SqStack;

/**
 * 初始化栈
 */
void InitStack(SqStack &S) {
    S.top = -1; // 初始化栈顶指针
}

/**
 * 判断栈空
 */
bool StackEmpty(SqStack S) {
    if (S.top == -1) {
        // 栈空
        return true;
    } else {
        return false;
    }
}

/**
 * 新元素进栈
 */
bool Push(SqStack &S, ElemType x) {

    return true;
}

/**
 * 出栈操作：数据还残留在内存中，只是逻辑上被删除了
 */
bool Pop(SqStack &S, ElemType &x) {

    return true;
}

/**
 * 读取栈顶元素
 */
bool GetTop(SqStack S, ElemType &x) {

    return true;
}


void main() {
    SqStack S;
    // 声明一个顺序栈（分配空间）
    InitStack(S);
}
