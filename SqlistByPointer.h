#ifndef SQLISTBYPOINTER_H
#define SQLISTBYPOINTER_H

/*
包含必要的头文件
*/
#include <stdio.h>
#include <stdlib.h>

#define INITLISTSIZE 100
#define INCREMENT 10

/*
通过动态分配数组也即是指针数组实现线性表（顺序表）及其简单操作
*/
typedef struct
{
    //注意区分指针实现的顺序表与单链表节点的构造
    int *data;
    int length;
    int listsize;
}Sqlist_SBP;

/*
待改进：统一操作返回状态码
*/

//入口控制函数
void Index_SBP();

/*
增操作
*/
//初始化线性表
void InitSqlist_SBP(Sqlist *l);

//插入元素，需要改变l的值，position是插入位置（1到maxsize），elem为插入的值
//void InsertSqlist(Sqlsit *l,int position,int elem);

/*
删操作
*/
//通过值删除元素
void DeleteByElemSqlist_SBP(Sqlist *l,int elem);

//通过位置删除元素
void DeleteByPositionSqlist_SBP(Sqlist *l,int position);

//删除整个线性表
void DeleteAllSqlist_SBP(Sqlist *l);

/*
改操作
*/
//更改特定位置的元素值,elem为更改后的值
void ChangeElemSqlist_SBP(Sqlist *l,int elem);

/*
查操作
*/
//返回特定位置的元素,position为位置，用elem存储查询出的元素
int GetElemSqlist_SBP(Sqlist l,int position,int *elem);

//返回特定元素的位置,用position返回
int GetPosition_SBP(Sqlist l,int *position,int elem);

//查询是否为空
int IsEmptySqlsit_SBP(Sqlist l);

//查询表是否满
int IsFullSqlist_SBP(Sqlist l);

//查询当前表长
int GetLengthSqlist_SBP(Sqlist l);

#endif

