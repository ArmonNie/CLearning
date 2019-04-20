#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>

/*
链式结构实现基本使用指针
*/
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;

/*
注意链表通过头指针来对元素进行操作
*/

/*
增操作
*/
//初始化
void InitLinklist();

#endif
