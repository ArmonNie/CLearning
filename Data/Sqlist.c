#include "Sqlist.h"

Status InitList_Sq(Sqlist *L){
    (*L).elem = (LElemtype *)malloc(LIST_INIT_SIZE*sizeof(LElemtype));
    if(!(*L).elem)
        exit(-2);
    (*L).length = 0;
    (*L).size = LIST_INIT_SIZE;

    return 0;
}//��ʼ��˳���

Status InsertList_Sq(Sqlist *L,int i,LElemtype e){
    LElemtype *newbase;
    LElemtype *q,*p;

    //���ڲ���λ�õĺϷ��Լ��
    if(i<0 || i>(L->length+1)){
        return -1;
    }

    //�ж��Ƿ���Ҫ���·���ռ�
    if(i>(*L).size){
        newbase = (LElemtype *)realloc((*L).elem,((*L).size+LISTINCREAMENT)*sizeof(LElemtype));
        if(!newbase)
            return -2;
        (*L).elem = newbase;
        (*L).size += LISTINCREAMENT;
    }

    //�ƶ�Ԫ�أ�ʵ�ֲ������???
    q = &(*L).elem[i];
    for(p=&(*L).elem[((*L).length)-1];p>q;p--)
    {
        *(p+1) = *p;//ע��ò�����ʽ��������
    }
    *q =  e;


    (*L).length++;//�˴������޸�size��������

    return 0;
}//˳������(�˴�i�����±�)

Status DeleteList_Sq(Sqlist *L,int i,LElemtype e){
    return 1;
}//˳���ɾ��

Status GetElemList_Sq(Sqlist L,int i,LElemtype e){
    e =  L.elem[i];
    return e;
}//�˴����á�*��,�˴�iֵ���±�


