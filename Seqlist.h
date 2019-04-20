#ifndef SEQLIST_H
#define SEQLIST_H

/*
包含必要的头文件
*/
#include <stdio.h>
#include <stdlib.h>
#include "UnExpectation.h"

#define MAXSIZE 100
#define INCREMENT 10

/*
通过静态数组实现线性表及其简单操作
*/
typedef struct
{
    int data[MAXSIZE];
    int length;
}Seqlist;

/*
待改进：统一操作返回状态码
*/

//入口控制函数
void Index();

/*
增操作
*/
//初始化线性表
//void InitSqlist(Sqlist &l);
/*
****在C中。形参不允许用&传值，在C中&仅代表取址，C++中可以，代表引用
****但是实参可以传入
*/
void InitSeqlist(Seqlist *l);

//顺序插入
void Insert(Seqlist *l,int elem);

//插入元素，需要改变l的值，position是插入位置（1到maxsize），elem为插入的值
void InsertSeqlist(Seqlist *l,int position,int elem);//？？？？？

/*
删操作
*/
//通过值删除元素
void DeleteByElemSeqlist(Seqlist *l,int elem);

//通过位置删除元素
void DeleteByPositionSeqlist(Seqlist *l,int position);

//删除整个线性表
void DeleteAllSeqlist(Seqlist *l);

/*
改操作
*/
//更改特定位置的元素值,elem为更改后的值
void ChangeElemSeqlist(Seqlist *l,int elem);

/*
查操作
*/
//打印表中所有元素
void PrintElem(Seqlist l);

//返回特定位置的元素,position为位置，用elem存储查询出的元素
int GetElemSeqlist(Seqlist l,int position,int *elem);

//返回特定元素的位置,用position返回
int GetPosition(Seqlist l,int *position,int elem);

//查询是否为空
int IsEmptySeqlsit(Seqlist l);

//查询表是否满
int IsFullSeqlist(Seqlist l);

//查询当前表长
int GetLengthSeqlist(Seqlist l);

#endif

