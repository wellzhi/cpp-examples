#include <stdio.h>

//全局变量pre，指向当前访问结点的前驱
ThreadNode *pre = NULL;
typedef struct ThreadNode {
    int data;
    struct ThreadNode *lchild, *rchild;
    int ltag, rtag;
} ThreadNode, *ThreadTree;

//中序遍历二叉树，一边遍历一边线索化
void InThread(ThreadTree T) {
    if (T != NULL) {
        InThread(T->lchild);  // 中序遍历左子树
        visit(T);             // 访问根节点
        InThread(T->rchild);  // 中序遍历右子树
    }
}

void visit(ThreadNode *q) {
    if (q->lchild == NULL) { // 左子树为空，建立前驱线索
        q->lchild = pre;
        q->ltag = 1;
    }
    if (pre != NULL && pre->rchild == NULL) { // 建立前驱结点的后继线索
        pre->rchild = q;
        pre->rtag = 1;
    }
    pre = q;
}

void CreateInThread(ThreadTree T) {
    pre = NULL;
    if (T != NULL) { // 非空二叉树才能线索化
        InThread(T); // 中序线索化二叉树
        if (pre->rchild == NULL) {
            pre->rtag = 1; // 处理遍历的最后一个结点
        }
    }
}