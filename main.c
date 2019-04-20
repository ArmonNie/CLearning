#include <stdio.h>
#include <stdlib.h>
#include "myCFunction.h"
#include "Ojproblem.h"
#include "Sqlist.h"


int main(void)//void参数可有可无
{
    //printf("Hello,main\n");
    //ex1();
    //ex2();
    //debug(2,0,1);
    //test();
    //p1_s();
    //sayHello();
    //printLetter();
    //mDivision();
    //basicMathCaculationTest();
    //ConnectRec();
    //myReadLine();
    //CTest *ct;
    //CTest ct1;
    //ct1.data = 1;
    //ct1.length = 1;
   // ct = &ct1;
    //C_Test_Array_1();
    //C_Test_Array_2();
    C_Test_Array_outFibonacci();
    //C_Test_Pointer_StarSymbol();
    //C_Test_Pointer_1();
    //C_Test_Pointer_2();
    //C_Test_Pointer_3();
    //C_Test_Pointer_Struct1(ct,ct1);
    //C_Test_IO_1();
    //C_Test_IO_3();
    //caculateSumOfEachNumber();
    //getMaxOfThree();
    //TranslateOneToNineAsEng();
    //C_IO_1();
    //C_Test_Struct_1();
    //getMaxOfTwo();
    //SqlistTest();
    return 0;
}
/*
void ex1()
{
    int num1,num2,num3;
    float x1,x2;
    _Bool result;//Óëbool²»Í¬
    result = 0;
    x1 = 7.8;
    num1 = 1;
    num2 = 2;
    num3 = num1 + num2;
    printf("Hello world!\n");
    printf("%f + %i = %i\n %i",num1,num2,num3,x1);
}

//？？？？？
void ex2()
{

    int a;
    a = 1;
   int temp;
   int *b;

   b = &a;
   temp = *b;

   printf("a\n",a);
   printf("temp=%i\n",temp);
   printf("*b=%i\n",*b);
   printf("b=%i\n",b);
}*/

/*
对与顺序表(静态数组)的测试函数
*/
void SqlistTest()
{
    Sqlist l;//此时数组空间便已经分配

    char c;//接受指令
    /*
    1.初始化
    2.插入操作
    3.删除操作
    4.查询操作
    */
    /*printf("请输入要对顺序表执行的操作：\n");
    printf("1.初始化\n2.插入操作\n3.删除操作\n4.查询操作");
    while((c = getchar()) != '')
    {


    }

    Index();*/
    int i;
    InitSqlist(&l);//注意此处用的“&”
    printf("Length After Initial:%i\n",GetLengthSqlist(l));
    /*
    插入测试(正常插入)
    */
    for(i = 1;i<6;i++)
    {
        printf("Insert into %i Seat,Insert Elem :%i.\n",i,2*i);
        InsertSqlist(&l,i,2*i);
    }
    /*
    插入测试（表尾直接插入，个人写的）
    */
    for(i = 1;i<6;i++)
    {
        printf("Insert into after the end,Insert Elem :%i.\n",i*10);
        Insert(&l,i*10);
    }
    printf(" Length After Insert:%i\n",GetLengthSqlist(l));
    PrintElem(l);
    /*
    删除操作测试
    */
    int deletedelem;
    printf("Deleting the first elem...\n");
    DeleteSqlist(&l,1,&deletedelem);//注意此处对于deletedelem使用的是直接传入名字
    printf(" Length After Deleet:%i\n",GetLengthSqlist(l));
    PrintElem(l);
    /*
    删除特定值元素测试（存在问题）
    */
    /*
    int elemtodelete;
    printf("Elem to be deleted:");
    scanf("%i",&elemtodelete);//千万输入不要掉“&”
    DeleteByElemSqlist(&l,elemtodelete);
    PrintElem(l);
    */
    /*
    查询元素
    */
    int searchingelem;
    printf("searching for elem in 1,2,3...\n");
    printf("position of 1 is : %i\n",GetElemSqlist(l,1,&searchingelem));
    printf("position of 2 is : %i\n",GetElemSqlist(l,2,&searchingelem));
    printf("position of 3 is : %i\n",GetElemSqlist(l,3,&searchingelem));
}
