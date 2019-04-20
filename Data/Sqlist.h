/*
    顺序表,此处为C实现（注意与C++区别）
*/

#ifndef SQLIST_H
#define SQLIST_H

#include<stdio.h>
#include<stdlib.h>
#include "Status.h"//包含相关文件

#define LIST_INIT_SIZE 100
#define LISTINCREAMENT 10//定义相关常量,此处与课本相同（但与辅助教材不同）

/*
顺序表类型定义
*/
#ifndef LELEMTYPE_SQ
#define LELEMTYPE_SQ
typedef int LElemtype;//个人：别名
#endif


/*
动态分配内存实现
*/
typedef struct
{
    LElemtype *elem;//存储空间基址，指向第一个节点的指针
    int length;//顺序表当前长度
    int size;//顺序表已经分配的容量
}Sqlist;

/*
关于C中文件的组织以及变量的访问
*/


/*
顺序表函数列表
*/
//指针参数即以引用？？？？
Status InitList_Sq(Sqlist *L);//初始化顺序表

void ClearList_Sq(Sqlist *L);//清空顺序表

void DestroyList_Sq(Sqlist *L);//销毁顺序表

Status ListEmpty_Sq(Sqlist L);//判断顺序表是否为空

int ListLength_Sq(Sqlist L);//返回顺序表中元素个数

Status GetElem_Sq(Sqlist L,int i,LElemtype *e);//获取特定位置元素（用e接收）

int LocateElem_Sq(Sqlist l,LElemtype e,Status(Compare)(LElemtype,LElemtype));//

Status PriorElem_Sq(Sqlist l,LElemtype cur_e,LElemtype *priorelem);//用priorelem返回cur_e的前驱

Status NextElem_Sq(Sqlist l,LElemtype cur_e,LElemtype *nextelem);//返回后继

Status InsertList_Sq(Sqlist *L,int i,LElemtype e);//顺序表插入

Status DeleteList_Sq(Sqlist *L,int i,LElemtype e);//顺序表删除

Status TraverseList_Sq(Sqlist l,void(Visit)(LElemtype));//函数参数列表中的函数？？？？


#endif
