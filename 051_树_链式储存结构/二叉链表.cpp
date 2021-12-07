#include "stdio.h"
#include "iostream"

struct ElemType {
    int value;
};

typedef struct BiTNode {
    ElemType data;
    struct BiTNode *lchild, *rchild;
} BiTNode, *BiTree;

// 定义一棵空树
BiTree root = NULL;

void initRoot(BiTree root) {
    // 插入根节点
    root = (BiTree) malloc(sizeof(BiTNode));
    root->data = {1};
    root->lchild = NULL;
    root->rchild = NULL;
}

// 为root结点插入一个左孩子结点
void insert(BiTree root) {
    BiTNode *p = (BiTNode *) malloc(sizeof(BiTNode));
    p->data = {2};
    p->lchild = NULL;
    p->rchild = NULL;
    root->lchild = p;
}
