#include <stdio.h>

const MAX_VERTEX_NUM = 12;
//顶点是否被访问过
bool visited[MAX_VERTEX_NUM];

//从顶点v出发，广度优先遍历图G
void BFS(Graph G, int v) {
//    访问初始顶点v
    visit(v);
//    对v做已访问标记
    visited[v] = TRUE;
//    顶点v入队列Q
    Enqueue(Q, v);
    while (!isEmpty(Q)) {
        DeQueue(Q, v);
        for (w = FirstNeighbor(G, v); w >= 0; w = NextNeighbor(G, v, w)) {
//            检测v所有邻接点
            if (!visited[w]) {// w为v的尚未访问的邻接顶点
                visit(w); // 访问顶点w
                visited[w] = TRUE; // 对w做已访问标记
                EnQueue(Q, w); // 顶点w入队列
            }
        }
    }
}

