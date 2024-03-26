
#include <stdio.h>
#include "sqlist.h"

int InitList(struct list *L)
{
    if (L == NULL)
        return -1;
    L->length = 0;
    return 0;
}

int Length(struct list *L)
{
    if (L == NULL)
        return -1;
    return L->length;
}

int LocateElem(struct list *L, ELEMENT_TYPE e)
{
    if (L == NULL) 
        return -1;
    for(int i = 0; i < L->length; i++) 
        if (L->data[i] == e) 
            return i + 1;
    return 0;
}

ELEMENT_TYPE GetElem(struct list *L, int i)
{
    return L->data[i-1];
}

int ListInsert(struct list *L, int i, ELEMENT_TYPE e)
{
    if (L == NULL) 
        return -1;
    // 越界
    if (i < 1 || i > L->length)
        return -2;
    // 满
    if (L->length > MAXSIZE)
        return -3;
    // 将第i个元素（下标i-1）之后的元素往后移动
    for (int j = L->length; j > i; j--)
        L->data[j] = L->data[j - 1];
    // 将元素放到腾出来的空位
    L->data[i - 1] = e;
    // 表长加1
    L->length++;
    return 0;
}

int ListDelete(struct list *L, int i, ELEMENT_TYPE *ep)
{
    if (L == NULL)
        return -1;
    // 越界
    if (i < 1 || i > L->length)
        return -2;
    // 将被删除元素的值存到*ep中
    if (ep != NULL)
        *ep = L->data[i - 1];
    // i后的元素前移填补空位
    for (int j = i; j < L->length; j--)
         L->data[j - 1] = L->data[i];
    L->length--;
    return 0;
}

int Empty(struct list *L)
{
    return !L->length;
}

int DestroyList(struct list *L)
{
    if (L == NULL)
        return -1;
    *L = (struct list){};
    return 0;
}





