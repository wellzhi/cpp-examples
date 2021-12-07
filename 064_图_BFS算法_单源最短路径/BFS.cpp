#include "stdio.h"
#include "iostream"


/**
 * 求顶点u到其他顶点的最短路径
 * @param G
 * @param u
 */
void MinDistanceBFS(Graph G, int u) {
    // d[i]表示从u到i结点的最短路径
    for (i = 0; i < G.vexnum; ++i) {
        d[i] = -1; // 初始化路径长度，默认是-1
        path[i] = -1; // 最短路径是从哪个顶点过来的（前驱结点）
    }

    d[0] = 0;           // u->u 的路径长度为0
    visited[u] = TRUE;  // visited[u]表示结点u是否被访问过
    EnQueue(Q, u);
    while (!isEmpty(Q)) {           // BFS算法主过程
        DeQueue(Q, u);              // 队头元素u出队
        for (w = FirstNeighbor(G, u); w >= 0; w = NextNeighbor(G, u, w)) {
            if (!visited[w]) {      // w为u的尚未被访问的邻接顶点
                d[w] = d[u] + 1;    // 路径长度+1
                path[w] = u;        // 最短路径应从u到w
                visited[w] = TRUE;  // 设置访问标记
                EnQueue(Q, w);      // 顶点w入队
            }
        }
    }
}

