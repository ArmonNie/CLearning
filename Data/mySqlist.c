#include "mySqlist.h"

Status InitList_Sq(mySqlist *L){
    (*L).length = 0;
    return 0;
}//��ʼ��˳���

Status InsertList_Sq(mySqlist *L,int i,LElemtype e){
    LElemtype *newbase;
    LElemtype *q,*p;

    //���ڲ���λ�õĺϷ��Լ��
    if(i<0 || i>(L.length+1)){
        return -1;
    }

    //�ж��Ƿ���Ҫ���·���ռ�(��������ʵ�ֿռ���չ����)
    /*
    if(i>sizeof((*L).data)){
        newbase = (LElemtype *)realloc((*L).elem,((*L).size+LISTINCREAMENT)*sizeof(LElemtype));
        if(!newbase)
            return -2;
        (*L).elem = newbase;
        (*L).size += LISTINCREAMENT;
    }
    */
    //�ƶ�Ԫ�أ�ʵ�ֲ������???
    q = &(*L).data[i];
    for(p=&(*L).data[((*L).length)-1];p>q;p--)
    {
        *(p+1) = *p;//ע��ò�����ʽ��������
    }
    *q =  e;


    (*L).length++;//�˴������޸�size��������

    return 0;
}//˳������(�˴�i�����±�)

Status DeleteList_Sq(mySqlist *L,int i,LElemtype e){
    return 1;
}//˳���ɾ��

Status GetElemList_Sq(Sqlist L,int i,LElemtype e){
    e =  L.data[i];
    return e;
}//�˴����á�*��,�˴�iֵ���±�

