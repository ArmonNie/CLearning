#include<stdarg.h>//���ڶ��岻����������
//DEBUG,�ҵļ��������
/*
�������������ĺ�������
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
�Ƚ��������Ĵ�С
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
��ӡ�ַ�
*/
void sayHello()
{
    printf("hello world��");
}
//A+B
void p1()
{
    int a,b;
    scanf("%i %i",&a,&b);
    printf("DEBUG:����1Ϊ%i,����2Ϊ%i\n",a,b);
    printf("a+b=%i",(a+b));
}
//���������ʵ�֣�ע��EOF=-1
void p1_s()
{
    int a,b;
    while(scanf("%i %i",&a,&b) != EOF)
        printf("a+b=%i\n",(a+b));
    printf("DEBUG:����1Ϊ%i,����2Ϊ%i\n",a,b);
}
//A+B���䣨C�е����뺯����
void p1_1()
{
//���뺯����ϰ
}
/*
    ��ӡСд��ĸ��ÿ��ʮ����
    a-z,97-122
    A-Z,65-90
*/
void printLetter()
{
    int i;//����������������for��������������
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
����������
*/
void mDivision()
{
    int a,b;
    scanf("%i %i",&a,&b);
    printf("%i %i",a/b,a%b);
}
/*
������ѧ����
*/
void basicMathCaculationTest()
{
    int a,b;
    scanf("%i %i",&a,&b);
    printf("%i",(a+b)*(a-b));
}
/*
������ƴ��(��ʽ��2*n+2*(n-2))
*/
void  ConnectRec()
{
    int n;
    scanf("%i",&n);
    printf("%i",2*n+2*(n-2));//���ڴ���20%������
}
/*
������λ���ָ�λ�ĺͣ���չ��nλ������
*/
void caculateSumOfEachNumber()
{
    int n;
    scanf("%i",&n);
    printf("%i",n/100 + (n%100)/10 + n - (n/100)*100 - ((n%100)/10)*10 );
}
/*
���������������ֵ
*/
void getMaxOfThree()
{
    int a,b,c;
    scanf("%i %i %i",&a,&b,&c);//ע��&�Ų�Ҫ��
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
����1-9ΪӢ��
*/
void TranslateOneToNineAsEng()
{
    int a;
    scanf("%i",&a);//���Ų�Ҫ��
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
scanf,����long long
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
forѭ��������
*/
