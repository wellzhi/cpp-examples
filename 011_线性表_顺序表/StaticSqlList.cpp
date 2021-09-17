#include "stdio.h"

#define MaxSize 10
typedef struct {
    ElemType data[MaxSize];
    int length;
} SqlList;

bool ListInsert(SqlList &L, int i, int e) {
    if (i < 1 || i > L.length + 1) {
        return false;
    }
    if (L.length >= MaxSize) {
        return false;
    }
    for (int j = L.length; j >= i; j--) {
        L.data[j] = L.data[j - 1];
    }
    L.data[i - 1] = e;
    L.length++;
    return true;
}

bool ListDelete(SqlList &L, int i, int &e) {
    if (i < 1 || i > L.length) {
        return false;
    }
    e = L.data[i - 1];
    for (int j = i; j < L.length; j++) {
        L.data[j - 1] = L.data[j];
    }
    L.length--;
    return true;
}

ElemType getElem(SqlList L, int i) {
    return L.data[i - 1];
}

int LocateElem(SqlList L, int e) {
    for (int i = 0; i < L.length; i++) {
        if (L.data[i] == e) {
            return i + 1;
        }
        return 0;
    }
}

int main() {
    SqlList L;
    InitList(L);

    ListInsert(L, 3, 3);

    int e = -1; // 用变量e把删除的元素“带回来”
    if (ListDelete(L, 3, e)) {
        printf("已删除第三个元素，删除元素值为=%d\n", e);
    } else {
        printf("位序i不合法，删除失败")
    }
    return 0;
}
