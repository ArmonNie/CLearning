#include "Ojproblem.h"
#include "myCFunction.h"
#include "UnExpectation.h"

void myIndex()
{
    int index = -1;
    printf("输入待测试程序（1为线上编程，2为C语言学习）：");
    scanf("%i"，&index);
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

//导向线上
void IndexToOj()
{


}

//导向简单编程
void IndexToCTest()
{


}
