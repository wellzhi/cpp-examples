#include <stdio.h>

#define MaxSize 10;
typedef struct {
    ElemType data[MaxSize];
    int top;
} SqlStack;

void InitStack(SqlStack &S) {
    S.top = -1;
}

bool StackEmpty(SqlStack S) {
    if (S.top == -1)
        return true;
    else
        return false;
}

bool Push(SqlStack &S, ElemType x) {
    if (S.top == MaxSize-1) {
        // 栈满了
        return false;
    }
//    以下两句可以用这句替代
//    S.data[++S.top] = x;

//    指针先加1
    S.top = S.top + 1;
//    新元素入栈
    S.data[S.top] = x;
    return true;
}

bool Pop(SqlStack &S, ElemType &x) {
    if (S.top == -1) {
//        栈空，报错
        return false;
    }
//    栈顶元素先出栈
    x = S.data[S.top];
    S.top = S.top - 1;
    return true;
}

bool GetTop(SqlStack S, ElemType &x) {
    if (S.top == -1) {
        return false;
    }
    x = S.data[S.data];
    return true;
}

void testStack() {
    SqlStack S;
    InitStack(S);

}

