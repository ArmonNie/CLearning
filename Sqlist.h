#ifndef SQLIST_H
#define SQLIST_H

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
}Sqlist;

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
void InitSqlist(Sqlist *l);

//˳�����
void Insert(Sqlist *l,int elem);

//����Ԫ�أ���Ҫ�ı�l��ֵ��position�ǲ���λ�ã�1��maxsize����elemΪ�����ֵ
void InsertSqlist(Sqlist *l,int position,int elem);//����������

/*
ɾ����
*/
//ɾ������
void DeleteSqlist(Sqlist *l,int position,int *elem);
//ͨ��ֵɾ��Ԫ��
void DeleteByElemSqlist(Sqlist *l,int elem);

//ͨ��λ��ɾ��Ԫ��
void DeleteByPositionSqlist(Sqlist *l,int position);

//ɾ���������Ա�
void DeleteAllSqlist(Sqlist *l);

/*
�Ĳ���
*/
//�����ض�λ�õ�Ԫ��ֵ,elemΪ���ĺ��ֵ
void ChangeElemSqlist(Sqlist *l,int elem);

/*
�����
*/
//��ӡ��������Ԫ��
void PrintElem(Sqlist l);

//�����ض�λ�õ�Ԫ��,positionΪλ�ã���elem�洢��ѯ����Ԫ��
int GetElemSqlist(Sqlist l,int position,int *elem);

//�����ض�Ԫ�ص�λ��,��position����
int GetPosition(Sqlist l,int *position,int elem);

//��ѯ�Ƿ�Ϊ��
int IsEmptySqlsit(Sqlist l);

//��ѯ���Ƿ���
int IsFullSqlist(Sqlist l);

//��ѯ��ǰ��
int GetLengthSqlist(Sqlist l);

#endif
