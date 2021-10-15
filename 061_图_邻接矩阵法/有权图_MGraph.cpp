#include "stdio.h"
#include "iostream"

#define MaxVertexNum = 100// 顶点数目最大值
#define INFINITY 65535 // 宏定义常量“无穷”
typedef char VertexType; // 顶点数据类型
typedef int EdgeType; // 带权图中边上权值的数据类型
typedef struct {
    VertexType Vex[ MaxVertexNum]; // 顶点表
    EdgeType Edge[ MaxVertexNum][MaxVertexNum]; // 领接矩阵，边表
    int vexNum, arcNum; // 图的当前顶点数和边数/弧树
} MGraph;
