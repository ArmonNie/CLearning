#include "Sqlist.h"

Status InitList_Sq(Sqlist *L){
    (*L).elem = (LElemtype *)malloc(LIST_INIT_SIZE*sizeof(LElemtype));
    if(!(*L).elem)
        exit(-2);
    (*L).length = 0;
    (*L).size = LIST_INIT_SIZE;

    return 0;
}//初始化顺序表

Status InsertList_Sq(Sqlist *L,int i,LElemtype e){
    LElemtype *newbase;
    LElemtype *q,*p;

    //对于插入位置的合法性检测
    if(i<0 || i>(L->length+1)){
        return -1;
    }

    //判断是否需要重新分配空间
    if(i>(*L).size){
        newbase = (LElemtype *)realloc((*L).elem,((*L).size+LISTINCREAMENT)*sizeof(LElemtype));
        if(!newbase)
            return -2;
        (*L).elem = newbase;
        (*L).size += LISTINCREAMENT;
    }

    //移动元素，实现插入操作???
    q = &(*L).elem[i];
    for(p=&(*L).elem[((*L).length)-1];p>q;p--)
    {
        *(p+1) = *p;//注意该操作方式！！！！
    }
    *q =  e;


    (*L).length++;//此处不用修改size？？？？

    return 0;
}//顺序表插入(此处i等于下标)

Status DeleteList_Sq(Sqlist *L,int i,LElemtype e){
    return 1;
}//顺序表删除

Status GetElemList_Sq(Sqlist L,int i,LElemtype e){
    e =  L.elem[i];
    return e;
}//此处不用“*”,此处i值做下标


