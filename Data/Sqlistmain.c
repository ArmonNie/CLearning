#include<stdio.h>
//#include "Sqlist.h"//�˴��������ļ�����������
#include "mySqlist.h"

int main()
{
    //Sqlist l;
    mySqlist l1;
    InitList_Sq(&l1);//ע��˴�ʹ�õġ�&��
    LElemtype e;
    int i;
    for(i = 0;i<6;i++)
    {
        InsertList_Sq(&l1,i,i*2);
    }
    printf("˳�����Ϊ%i\n",l1.length);
    for(i = 0;i<6;i++)
    {
        printf("��%i��Ԫ��Ϊ%i\n",(i+1),GetElemList_Sq(l1,i,&e));
    }
}
