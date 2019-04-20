/*
    ˳���,�˴�ΪCʵ�֣�ע����C++����
*/

#ifndef MYSQLIST_H
#define MYSQLIST_H

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
ֱ������ʵ��
*/
typedef struct
{
    LElemtype data[LIST_INIT_SIZE];
    int length;//˳���ǰ����
}mySqlist;

/*
����C���ļ�����֯�Լ������ķ���
*/


/*
˳������б�
*/
//ָ������������ã�������
Status InitList_Sq(mySqlist *L);//��ʼ��˳���

void ClearList_Sq(mySqlist *L);//���˳���

void DestroyList_Sq(mySqlist *L);//����˳���

Status ListEmpty_Sq(mySqlist L);//�ж�˳����Ƿ�Ϊ��

int ListLength_Sq(mySqlist L);//����˳�����Ԫ�ظ���

Status GetElem_Sq(mySqlist L,int i,LElemtype *e);//��ȡ�ض�λ��Ԫ�أ���e���գ�

int LocateElem_Sq(mySqlist l,LElemtype e,Status(Compare)(LElemtype,LElemtype));//

Status PriorElem_Sq(mySqlist l,LElemtype cur_e,LElemtype *priorelem);//��priorelem����cur_e��ǰ��

Status NextElem_Sq(mySqlist l,LElemtype cur_e,LElemtype *nextelem);//���غ��

Status InsertList_Sq(mySqlist *L,int i,LElemtype e);//˳������

Status DeleteList_Sq(mySqlist *L,int i,LElemtype e);//˳���ɾ��

Status TraverseList_Sq(mySqlist l,void(Visit)(LElemtype));//���������б��еĺ�����������


#endif

