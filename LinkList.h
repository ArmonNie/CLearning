#ifndef LINKLIST_H
#define LINKLIST_H

#include <stdio.h>
#include <stdlib.h>

/*
��ʽ�ṹʵ�ֻ���ʹ��ָ��
*/
typedef struct LNode
{
    int data;
    struct LNode *next;
}LNode;

/*
ע������ͨ��ͷָ������Ԫ�ؽ��в���
*/

/*
������
*/
//��ʼ��
void InitLinklist();

#endif
