/*
    ˳���,�˴�ΪCʵ�֣�ע����C++����
*/

#ifndef SQLIST_H
#define SQLIST_H

#include<stdio.h>
#include<stdlib.h>
#include "Status.h"//��������ļ�

#define LIST_INIT_SIZE 100
#define LISTINCREAMENT 10//������س���,�˴���α���ͬ�����븨���̲Ĳ�ͬ��

/*
˳������Ͷ���
*/
#ifndef LELEMTYPE_SQ
#define LELEMTYPE_SQ
typedef int LElemtype;//���ˣ�����
#endif


/*
��̬�����ڴ�ʵ��
*/
typedef struct
{
    LElemtype *elem;//�洢�ռ��ַ��ָ���һ���ڵ��ָ��
    int length;//˳���ǰ����
    int size;//˳����Ѿ����������
}Sqlist;

/*
����C���ļ�����֯�Լ������ķ���
*/


/*
˳������б�
*/
//ָ������������ã�������
Status InitList_Sq(Sqlist *L);//��ʼ��˳���

void ClearList_Sq(Sqlist *L);//���˳���

void DestroyList_Sq(Sqlist *L);//����˳���

Status ListEmpty_Sq(Sqlist L);//�ж�˳����Ƿ�Ϊ��

int ListLength_Sq(Sqlist L);//����˳�����Ԫ�ظ���

Status GetElem_Sq(Sqlist L,int i,LElemtype *e);//��ȡ�ض�λ��Ԫ�أ���e���գ�

int LocateElem_Sq(Sqlist l,LElemtype e,Status(Compare)(LElemtype,LElemtype));//

Status PriorElem_Sq(Sqlist l,LElemtype cur_e,LElemtype *priorelem);//��priorelem����cur_e��ǰ��

Status NextElem_Sq(Sqlist l,LElemtype cur_e,LElemtype *nextelem);//���غ��

Status InsertList_Sq(Sqlist *L,int i,LElemtype e);//˳������

Status DeleteList_Sq(Sqlist *L,int i,LElemtype e);//˳���ɾ��

Status TraverseList_Sq(Sqlist l,void(Visit)(LElemtype));//���������б��еĺ�����������


#endif
