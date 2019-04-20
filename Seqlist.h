#ifndef SEQLIST_H
#define SEQLIST_H

/*
������Ҫ��ͷ�ļ�
*/
#include <stdio.h>
#include <stdlib.h>
#include "UnExpectation.h"

#define MAXSIZE 100
#define INCREMENT 10

/*
ͨ����̬����ʵ�����Ա���򵥲���
*/
typedef struct
{
    int data[MAXSIZE];
    int length;
}Seqlist;

/*
���Ľ���ͳһ��������״̬��
*/

//��ڿ��ƺ���
void Index();

/*
������
*/
//��ʼ�����Ա�
//void InitSqlist(Sqlist &l);
/*
****��C�С��ββ�������&��ֵ����C��&������ȡַ��C++�п��ԣ���������
****����ʵ�ο��Դ���
*/
void InitSeqlist(Seqlist *l);

//˳�����
void Insert(Seqlist *l,int elem);

//����Ԫ�أ���Ҫ�ı�l��ֵ��position�ǲ���λ�ã�1��maxsize����elemΪ�����ֵ
void InsertSeqlist(Seqlist *l,int position,int elem);//����������

/*
ɾ����
*/
//ͨ��ֵɾ��Ԫ��
void DeleteByElemSeqlist(Seqlist *l,int elem);

//ͨ��λ��ɾ��Ԫ��
void DeleteByPositionSeqlist(Seqlist *l,int position);

//ɾ���������Ա�
void DeleteAllSeqlist(Seqlist *l);

/*
�Ĳ���
*/
//�����ض�λ�õ�Ԫ��ֵ,elemΪ���ĺ��ֵ
void ChangeElemSeqlist(Seqlist *l,int elem);

/*
�����
*/
//��ӡ��������Ԫ��
void PrintElem(Seqlist l);

//�����ض�λ�õ�Ԫ��,positionΪλ�ã���elem�洢��ѯ����Ԫ��
int GetElemSeqlist(Seqlist l,int position,int *elem);

//�����ض�Ԫ�ص�λ��,��position����
int GetPosition(Seqlist l,int *position,int elem);

//��ѯ�Ƿ�Ϊ��
int IsEmptySeqlsit(Seqlist l);

//��ѯ���Ƿ���
int IsFullSeqlist(Seqlist l);

//��ѯ��ǰ��
int GetLengthSeqlist(Seqlist l);

#endif

