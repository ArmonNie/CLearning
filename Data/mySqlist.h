/*
    顺序表,此处为C实现（注意与C++区别）
*/

#ifndef MYSQLIST_H
#define MYSQLIST_H

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
直接数组实现
*/
typedef struct
{
    LElemtype data[LIST_INIT_SIZE];
    int length;//顺序表当前长度
}mySqlist;

/*
关于C中文件的组织以及变量的访问
*/


/*
顺序表函数列表
*/
//指针参数即以引用？？？？
Status InitList_Sq(mySqlist *L);//初始化顺序表

void ClearList_Sq(mySqlist *L);//清空顺序表

void DestroyList_Sq(mySqlist *L);//销毁顺序表

Status ListEmpty_Sq(mySqlist L);//判断顺序表是否为空

int ListLength_Sq(mySqlist L);//返回顺序表中元素个数

Status GetElem_Sq(mySqlist L,int i,LElemtype *e);//获取特定位置元素（用e接收）

int LocateElem_Sq(mySqlist l,LElemtype e,Status(Compare)(LElemtype,LElemtype));//

Status PriorElem_Sq(mySqlist l,LElemtype cur_e,LElemtype *priorelem);//用priorelem返回cur_e的前驱

Status NextElem_Sq(mySqlist l,LElemtype cur_e,LElemtype *nextelem);//返回后继

Status InsertList_Sq(mySqlist *L,int i,LElemtype e);//顺序表插入

Status DeleteList_Sq(mySqlist *L,int i,LElemtype e);//顺序表删除

Status TraverseList_Sq(mySqlist l,void(Visit)(LElemtype));//函数参数列表中的函数？？？？


#endif

