#include<stdarg.h>//用于定义不定参数函数
//DEBUG,我的简单输出调试
/*
参数个数不定的函数定义
*/
/*void debug(int a,...)
{
    va_list parameter;
    va_start(parameter,a);
    for(int i = 0;i<a;i++)
    {
        printf(va_arg(parameter,int));
    }
}*/
/*
比较两个数的大小
*/
void getMaxOfTwo()
{
    int a,b;
    scanf("%i %i",&a,&b);
    if(a > b)
    {
        printf("%i\n",a);
    }
    if(a < b)
    {
        printf("%i\n",b);
    }
}
/*
打印字符
*/
void sayHello()
{
    printf("hello world！");
}
//A+B
void p1()
{
    int a,b;
    scanf("%i %i",&a,&b);
    printf("DEBUG:参数1为%i,参数2为%i\n",a,b);
    printf("a+b=%i",(a+b));
}
//连续输入的实现，注意EOF=-1
void p1_s()
{
    int a,b;
    while(scanf("%i %i",&a,&b) != EOF)
        printf("a+b=%i\n",(a+b));
    printf("DEBUG:参数1为%i,参数2为%i\n",a,b);
}
//A+B补充（C中的输入函数）
void p1_1()
{
//输入函数练习
}
/*
    打印小写字母表，每行十三个
    a-z,97-122
    A-Z,65-90
*/
void printLetter()
{
    int i;//本编译器不允许在for（）中声明变量
    int counter = 0;

    for(i = 97; i <= 122;i++)
    {
        printf("%c",i);
        counter++;
        if(counter%13 == 0)
            printf("\n");
    }
    for(i = 122; i >= 97;i--)
    {
        printf("%c",i);
        counter++;
        if(counter%13 == 0)
            printf("\n");
    }
}

/*
求商与余数
*/
void mDivision()
{
    int a,b;
    scanf("%i %i",&a,&b);
    printf("%i %i",a/b,a%b);
}
/*
基本数学运算
*/
void basicMathCaculationTest()
{
    int a,b;
    scanf("%i %i",&a,&b);
    printf("%i",(a+b)*(a-b));
}
/*
正方形拼接(公式：2*n+2*(n-2))
*/
void  ConnectRec()
{
    int n;
    scanf("%i",&n);
    printf("%i",2*n+2*(n-2));//存在错误20%？？？
}
/*
计算三位数字各位的和（扩展，n位？？）
*/
void caculateSumOfEachNumber()
{
    int n;
    scanf("%i",&n);
    printf("%i",n/100 + (n%100)/10 + n - (n/100)*100 - ((n%100)/10)*10 );
}
/*
计算三个数的最大值
*/
void getMaxOfThree()
{
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);//注意&号不要掉
    printf("%i %i %i\n",a,b,c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%i\n",a);
        }
        else
        {
            printf("%i\n",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%i\n",b);
        }
        else
        {
            printf("%i\n",c);
        }
    }
}

/*
翻译1-9为英文
*/
void TranslateOneToNineAsEng()
{
    int a;
    scanf("%i",&a);//符号不要掉
    switch(a)
    {
        case 1:
        printf("one");
        break;
        case 2:
        printf("two");
        break;
        case 3:
        printf("three");
        break;
        case 4:
        printf("four");
        break;
        case 5:
        printf("five");
        break;
        case 6:
        printf("six");
        break;
        case 7:
        printf("seven");
        break;
        case 8:
        printf("eight");
        break;
        case 9:
        printf("nine");
        break;
        default:
        printf("out");
        break;
    }
}
/*
scanf,关于long long
*/
void C_IO_1()
{
    int a,b;
    long long result;
    scanf("%i*%i=",&a,&b);
    result = a*b;
    printf("%lld",result);
}
/*
for循环！！！
*/
