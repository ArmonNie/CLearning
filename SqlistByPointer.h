#ifndef SQLISTBYPOINTER_H
#define SQLISTBYPOINTER_H

/*
������Ҫ��ͷ�ļ�
*/
#include <stdio.h>
#include <stdlib.h>

#define INITLISTSIZE 100
#define INCREMENT 10

/*
ͨ����̬��������Ҳ����ָ������ʵ�����Ա�˳�������򵥲���
*/
typedef struct
{
    //ע������ָ��ʵ�ֵ�˳����뵥����ڵ�Ĺ���
    int *data;
    int length;
    int listsize;
}Sqlist_SBP;

/*
���Ľ���ͳһ��������״̬��
*/

//��ڿ��ƺ���
void Index_SBP();

/*
������
*/
//��ʼ�����Ա�
void InitSqlist_SBP(Sqlist *l);

//����Ԫ�أ���Ҫ�ı�l��ֵ��position�ǲ���λ�ã�1��maxsize����elemΪ�����ֵ
//void InsertSqlist(Sqlsit *l,int position,int elem);

/*
ɾ����
*/
//ͨ��ֵɾ��Ԫ��
void DeleteByElemSqlist_SBP(Sqlist *l,int elem);

//ͨ��λ��ɾ��Ԫ��
void DeleteByPositionSqlist_SBP(Sqlist *l,int position);

//ɾ���������Ա�
void DeleteAllSqlist_SBP(Sqlist *l);

/*
�Ĳ���
*/
//�����ض�λ�õ�Ԫ��ֵ,elemΪ���ĺ��ֵ
void ChangeElemSqlist_SBP(Sqlist *l,int elem);

/*
�����
*/
//�����ض�λ�õ�Ԫ��,positionΪλ�ã���elem�洢��ѯ����Ԫ��
int GetElemSqlist_SBP(Sqlist l,int position,int *elem);

//�����ض�Ԫ�ص�λ��,��position����
int GetPosition_SBP(Sqlist l,int *position,int elem);

//��ѯ�Ƿ�Ϊ��
int IsEmptySqlsit_SBP(Sqlist l);

//��ѯ���Ƿ���
int IsFullSqlist_SBP(Sqlist l);

//��ѯ��ǰ��
int GetLengthSqlist_SBP(Sqlist l);

#endif

