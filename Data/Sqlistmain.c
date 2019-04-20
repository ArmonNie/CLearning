#include<stdio.h>
//#include "Sqlist.h"//此处包含的文件？？？？？
#include "mySqlist.h"

int main()
{
    //Sqlist l;
    mySqlist l1;
    InitList_Sq(&l1);//注意此处使用的“&”
    LElemtype e;
    int i;
    for(i = 0;i<6;i++)
    {
        InsertList_Sq(&l1,i,i*2);
    }
    printf("顺序表长度为%i\n",l1.length);
    for(i = 0;i<6;i++)
    {
        printf("第%i个元素为%i\n",(i+1),GetElemList_Sq(l1,i,&e));
    }
}
