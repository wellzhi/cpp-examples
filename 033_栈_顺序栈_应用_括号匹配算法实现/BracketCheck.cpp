#include "stdio.h"
#include "iostream"
// 定义栈中元素的最大个数
#define MaxSize 100;
typedef struct {
    char data[MaxSize]; // 静态数组存放栈中的元素
    int top; //栈顶指针
} SqStack;

// 注意：考试中可以直接使用基本操作，建议简要说明接口
// 初始化栈
void InitStack(SqStack &S);

// 判断栈是否为空
bool StackEmpty(SqStack S);

// 新元素入栈
bool Push(SqStack &S, char x);

// 栈顶元素出栈，用x返回
bool Pop(SqStack &S, char &x);

/**
 * 括号匹配检查
 * @param str 以括号为元素的字符数组，eg: ["(","(","[","]",")",")"]
 * @param length str数组元素个数
 * @return
 * 注：匹配失败的三种情况：
 * 1、左括号单身，eg: ["(","(","[","]",")"]
 * 2、右括号单身，eg: ["(","[","]",")",")"]
 * 3、左右括号不匹配，eg: ["(","(","(","]",")",")"]
 *
 * 算法思路：
 * 遇到左括号"（,[,{"则入栈
 * 遇到右括号“),],}"则出栈
 * 判断左右括号是否匹配，判断左右括号是否单身（栈顶空、满）
 */
bool bracketCheck(char str[], int length) {
    SqStack S;
    // 初始化一个栈
    InitStack(S);
    for (int i = 0; i < length; i++) {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{') {
            Push(S, str[i]); // 扫描到左括号，入栈
        } else {
            if (StackEmpty(S)) { // 扫描到右括号，且当前栈空
                return false; // 匹配失败
            }

            char topElem; // 栈顶元素
            Pop(S, topElem);

            if (str[i] == ')' && topElem != '(') {
                return false;
            }
            if (str[i] == ']' && topElem != '[') {
                return false;
            }
            if (str[i] == '}' && topElem != '{') {
                return false;
            }
            // 检索完全部括号后，栈空说明匹配成功
            return StackEmpty(S);
        }
    }
}