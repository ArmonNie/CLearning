#include "Ojproblem.h"
#include "myCFunction.h"
#include "UnExpectation.h"

void myIndex()
{
    int index = -1;
    printf("��������Գ���1Ϊ���ϱ�̣�2ΪC����ѧϰ����");
    scanf("%i"��&index);
    if(index == 1)
    {
        IndexToOj();
    }
    else if(index == 1)
    {
        IndexToCTest();
    }
    else
    {
        printf("ERROR");
        exit(0);
    }
}

//��������
void IndexToOj()
{


}

//����򵥱��
void IndexToCTest()
{


}
