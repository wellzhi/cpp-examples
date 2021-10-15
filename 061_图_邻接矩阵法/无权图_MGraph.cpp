#include "stdio.h"
#include "iostream"

#define MaxVertexNum = 100// 顶点数目最大值
// **********************************************************
typedef struct {
    char Vex[ MaxVertexNum]; // 顶点表
    int Edge[ MaxVertexNum][MaxVertexNum]; // 领接矩阵，边表
    int vexNum, arcNum; // 图的当前顶点数和边数/弧树
} MGraph;
// **********************************************************
