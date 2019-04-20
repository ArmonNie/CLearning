#include "Sqlist.h"


//入口控制函数
void Index(int flag)
{
    /*switch(flag)
    {
        case 1:
        break;
        case 2:
        break;
        case 3:
        break;
        case 4:
        break;
        case 5:
        break;
        case 6:
        break;
        case 7:
        break;
        default:
        printf("No such order!!")
        //exit(0);
        break;
    }*/

}

/*
增操作
*/
//初始化线性表
void InitSqlist(Sqlist *l)
{
    l->length = 0;
}

//顺序在表尾插入
void Insert(Sqlist *l,int elem)
{
    l->data[l->length] = elem;
    l->length++;
}

//插入元素，需要改变l的值，position是插入位置（1到maxsize），elem为插入的值
void InsertSqlist(Sqlist *l,int position,int elem)
{
    int temp = position - 1;//转化为对应数组的实际标号
    int i;
    //关于此处的上界，保证不能隔一个插一个
    if((position<0)||(position>(l->length)+1))
    {
        //mError(401);//越界错误
        printf("越界.\n");
    }
    for(i=l->length-1;i>=temp;i--)
    {
        l->data[i+1] = l->data[i];
    }
    l->data[temp] = elem;
    l->length++;
}

/*
删操作
*/
//删除操作
void DeleteSqlist(Sqlist *l,int position,int *elem)
{
    int i;
    if((position < 1)||(position > (l->length+1)))
    {
        printf("越界");
    }
    *elem = l->data[position -1];
    for(i = position-1;i<(l->length -1);i++)
    {
        l->data[i] = l->data[i+1];
    }
    l->length--;
    printf("元素%i已经删除...\n",*elem);
}

//通过值删除元素
void DeleteByElemSqlist(Sqlist *l,int elem)
{
    int i;
    printf("待删除:%i\n",elem);
    for(i = 0;i <= (l->length-1);i++)//i<length或者i<=length-1
    {
        if(l->data[i] == elem)
        {
            printf("Debug DeleteByElem:%i,position:%i\n",l->data[i],i+1);
            DeleteByPositionSqlist(&l,i+1);//此处l应该如何？？
            //i--;//此处存在问题！！！！
        }
    }
}

//通过位置删除元素，此函数实质上比之前的区别在于此个未要求返回值
void DeleteByPositionSqlist(Sqlist *l,int position)
{
    int i;
    if((position < 1)||(position > (l->length+1)))
    {
        printf("越界");
    }
    int *elem1 = &(l->data[position -1]);
    for(i = position-1;i<(l->length -1);i++)
    {
        l->data[i] = l->data[i+1];
    }
    l->length--;
    printf("元素%i已经删除...\n",*elem1);
}

//删除整个线性表
void DeleteAllSqlist(Sqlist *l)
{
    l->length = 0;
    printf("元素列表已经删除...\n");
}

/*
改操作
*/
//更改特定位置的元素值,elem为更改后的值
void ChangeElemSqlist(Sqlist *l,int elem)
{


}

/*
查操作
*/
//打印表中所有元素
void PrintElem(Sqlist l)
{
    int i;
    printf("元素列表：\n");
    for(i=0;i<l.length;i++)
    {
        printf("%i ",l.data[i]);
    }
    printf("\n");
}

//返回特定位置的元素,position为位置，用elem存储查询出的元素
int GetElemSqlist(Sqlist l,int position,int *elem)
{
    if((position < 1)||(position > (l.length+1)))
    {
        printf("越界\n");
    }
    elem = &l.data[position-1];
    return *elem;
}

//返回特定元素的位置,用position返回
int GetPosition(Sqlist l,int *position,int elem)
{


}

//查询是否为空
int IsEmptySqlsit(Sqlist l)
{
    if(l.length != 0)
        return 0;
    else
        return 1;
}

//查询表是否满
int IsFullSqlist(Sqlist l)
{
    if(l.length == MAXSIZE)
        return 1;
}

//查询当前表长
int GetLengthSqlist(Sqlist l)
{
    return l.length;
}
