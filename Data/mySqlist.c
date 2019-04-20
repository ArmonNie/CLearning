#include "mySqlist.h"

Status InitList_Sq(mySqlist *L){
    (*L).length = 0;
    return 0;
}//初始化顺序表

Status InsertList_Sq(mySqlist *L,int i,LElemtype e){
    LElemtype *newbase;
    LElemtype *q,*p;

    //对于插入位置的合法性检测
    if(i<0 || i>(L.length+1)){
        return -1;
    }

    //判断是否需要重新分配空间(对于数组实现空间扩展？？)
    /*
    if(i>sizeof((*L).data)){
        newbase = (LElemtype *)realloc((*L).elem,((*L).size+LISTINCREAMENT)*sizeof(LElemtype));
        if(!newbase)
            return -2;
        (*L).elem = newbase;
        (*L).size += LISTINCREAMENT;
    }
    */
    //移动元素，实现插入操作???
    q = &(*L).data[i];
    for(p=&(*L).data[((*L).length)-1];p>q;p--)
    {
        *(p+1) = *p;//注意该操作方式！！！！
    }
    *q =  e;


    (*L).length++;//此处不用修改size？？？？

    return 0;
}//顺序表插入(此处i等于下标)

Status DeleteList_Sq(mySqlist *L,int i,LElemtype e){
    return 1;
}//顺序表删除

Status GetElemList_Sq(Sqlist L,int i,LElemtype e){
    e =  L.data[i];
    return e;
}//此处不用“*”,此处i值做下标

