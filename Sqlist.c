#include "Sqlist.h"


//��ڿ��ƺ���
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
������
*/
//��ʼ�����Ա�
void InitSqlist(Sqlist *l)
{
    l->length = 0;
}

//˳���ڱ�β����
void Insert(Sqlist *l,int elem)
{
    l->data[l->length] = elem;
    l->length++;
}

//����Ԫ�أ���Ҫ�ı�l��ֵ��position�ǲ���λ�ã�1��maxsize����elemΪ�����ֵ
void InsertSqlist(Sqlist *l,int position,int elem)
{
    int temp = position - 1;//ת��Ϊ��Ӧ�����ʵ�ʱ��
    int i;
    //���ڴ˴����Ͻ磬��֤���ܸ�һ����һ��
    if((position<0)||(position>(l->length)+1))
    {
        //mError(401);//Խ�����
        printf("Խ��.\n");
    }
    for(i=l->length-1;i>=temp;i--)
    {
        l->data[i+1] = l->data[i];
    }
    l->data[temp] = elem;
    l->length++;
}

/*
ɾ����
*/
//ɾ������
void DeleteSqlist(Sqlist *l,int position,int *elem)
{
    int i;
    if((position < 1)||(position > (l->length+1)))
    {
        printf("Խ��");
    }
    *elem = l->data[position -1];
    for(i = position-1;i<(l->length -1);i++)
    {
        l->data[i] = l->data[i+1];
    }
    l->length--;
    printf("Ԫ��%i�Ѿ�ɾ��...\n",*elem);
}

//ͨ��ֵɾ��Ԫ��
void DeleteByElemSqlist(Sqlist *l,int elem)
{
    int i;
    printf("��ɾ��:%i\n",elem);
    for(i = 0;i <= (l->length-1);i++)//i<length����i<=length-1
    {
        if(l->data[i] == elem)
        {
            printf("Debug DeleteByElem:%i,position:%i\n",l->data[i],i+1);
            DeleteByPositionSqlist(&l,i+1);//�˴�lӦ����Σ���
            //i--;//�˴��������⣡������
        }
    }
}

//ͨ��λ��ɾ��Ԫ�أ��˺���ʵ���ϱ�֮ǰ���������ڴ˸�δҪ�󷵻�ֵ
void DeleteByPositionSqlist(Sqlist *l,int position)
{
    int i;
    if((position < 1)||(position > (l->length+1)))
    {
        printf("Խ��");
    }
    int *elem1 = &(l->data[position -1]);
    for(i = position-1;i<(l->length -1);i++)
    {
        l->data[i] = l->data[i+1];
    }
    l->length--;
    printf("Ԫ��%i�Ѿ�ɾ��...\n",*elem1);
}

//ɾ���������Ա�
void DeleteAllSqlist(Sqlist *l)
{
    l->length = 0;
    printf("Ԫ���б��Ѿ�ɾ��...\n");
}

/*
�Ĳ���
*/
//�����ض�λ�õ�Ԫ��ֵ,elemΪ���ĺ��ֵ
void ChangeElemSqlist(Sqlist *l,int elem)
{


}

/*
�����
*/
//��ӡ��������Ԫ��
void PrintElem(Sqlist l)
{
    int i;
    printf("Ԫ���б�\n");
    for(i=0;i<l.length;i++)
    {
        printf("%i ",l.data[i]);
    }
    printf("\n");
}

//�����ض�λ�õ�Ԫ��,positionΪλ�ã���elem�洢��ѯ����Ԫ��
int GetElemSqlist(Sqlist l,int position,int *elem)
{
    if((position < 1)||(position > (l.length+1)))
    {
        printf("Խ��\n");
    }
    elem = &l.data[position-1];
    return *elem;
}

//�����ض�Ԫ�ص�λ��,��position����
int GetPosition(Sqlist l,int *position,int elem)
{


}

//��ѯ�Ƿ�Ϊ��
int IsEmptySqlsit(Sqlist l)
{
    if(l.length != 0)
        return 0;
    else
        return 1;
}

//��ѯ���Ƿ���
int IsFullSqlist(Sqlist l)
{
    if(l.length == MAXSIZE)
        return 1;
}

//��ѯ��ǰ��
int GetLengthSqlist(Sqlist l)
{
    return l.length;
}
