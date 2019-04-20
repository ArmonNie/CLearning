/*
数组练习
*/

//数组初始化与声明，遍历输出
void C_Test_Array_1()
{
    int array1[10];
    int index;

    printf("输出未显式赋值的数组：\n");
    for(index = 0;index < 10;index++)
    {
        printf("array[%i] = %i\n",index,array1[index]);
    }
    printf("输出显式赋值的数组：\n");
    for(index = 0;index < 10;index++)
    {
        array1[index] = index;
    }
    for(index = 0;index < 10;index++)
    {
        printf("array[%i] = %i\n",index,array1[index]);
    }
}

//数组计数器
void C_Test_Array_2()
{
    int caculatorArray[10] = {0};//注意几种不同的数组赋值方法
    int index,counter,response;
    printf("请输入你的响应：\n");
    for(counter = 0;counter < 20;counter++)
    {
        scanf("%i",&response);
        caculatorArray[response]++;
        if(response >= 10)
        {
            printf("错误响应：\n");
        }
    }
    printf("输出响应：\n");
    for(index = 0;index<10;index++)
    {
        printf("%i\n",caculatorArray[index]);
    }
}

//获取斐波那契值
int getFibonacci(int n)
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(n > 2)
        return getFibonacci(n-1) + getFibonacci(n-2);
}

//使用数组存储斐波那契数列并输出
void C_Test_Array_outFibonacci()
{
    int Fibonacci[15];
    int index;
    for(index = 0;index<15;index++)
    {
        Fibonacci[index] = getFibonacci(index+1);
    }
    for(index = 0;index<15;index++)
    {
        printf("Fibonacci[%i] = %i\n",index,Fibonacci[index]);
    }
}
/*
结构体练习
*/

//结构体声明以及引用赋值
void C_Test_Struct_1()
{
    struct date
    {
        int year;
        int month;
        int day;
    };

    struct date myBirthDay;

    myBirthDay.year = 1998;
    myBirthDay.month = 1;
    myBirthDay.day = 5;

    printf("我生于%i年%i月%i日。\n",myBirthDay.year,myBirthDay.month,myBirthDay.day);
}


/*
指针练习
*/
//关于codeblock或C对于&在函数的使用
/*
****在C中。形参不允许用&传值，在C中&仅代表取址，C++中可以，代表引用
****但是实参可以传入
*/
//void C_Test_PointerSymbol(int &l)
typedef struct
{
    int data;
    int length;
}CTest;

//测试星符的作用
void C_Test_Pointer_StarSymbol()
{
    //int a = 10;
    //int b;
    //b = &a;
    //printf("星符测试：%i",*b);
}

//简单指针，重点还是对于星符的作用要有个人见解（见下）
void C_Test_Pointer_1()
{
    int x = 100;
    int *temp;
    temp = &x;//注意赋值是取一个地址放进去,之后*temp指向x
    /*
    个人理解：temp中放的是一个代表地址的整数
    而星符的作用是让系统把这个数字翻译成地址
    即temp与*temp的值是不同的
    */
    printf("x的地址为：%i\n",&x);
    printf("地址%i中为%i\n",temp,*temp);//注意星符不能掉，struct则没用星符###

    /*
    注意&temp与&*temp的区别####
    */
    printf("temp的地址：%i\n",&temp);
    printf("x的地址为：%i\n",&*temp);
}

//空指针
void C_Test_Pointer_2()
{
    /*
    此时虽然为空，但并未出现编译错误
    */
    int *temp_1;
    printf("地址%i中为%i\n",temp_1,*temp_1);//注意星符不能掉
}

//表达式中使用指针(多个指针指向同一个值)
void C_Test_Pointer_3()
{
    int a,b;
    int *p1,*p2;
    a = 2;
    p1 = &a;
    b = *p1*2;
    p2 = p1;
    printf("a=%i,b=%i\n",a,b);
    printf("*p1指向:%i\n",*p1);
    printf("p1值:%i\n",p1);
    printf("*p2指向:%i\n",*p2);
    printf("p2值:%i\n",p2);
}

//函数传入指针,注意如何传入以及函数内如何访问
void C_Test_Pointer_4(int *param1)
{
    //参见下一个程序
}

//指针简单指向结构体（简单结构体定义如上）
/*
注意如何把指针写在形参和做实参传入
*/
void C_Test_Pointer_Struct1(CTest *l,CTest ct)//注意是星符而不能用&，&对应的是C++的引用
{
    printf("当前该结构体位于地址：%i\n",&ct);
    printf("当前该结构体数据与长度为%i和%i\n",ct.data,ct.length);
    printf("该指针内的值为：%i\n",l);

    /*
    注意下面两个输出
    说明-》已经有星符的作用
    而星符依然可以作为访问的手段（见下）
    */
    printf("该指针指向对象内的数据与长度为%i和%i\n",l->data,l->length);//此处又不用星符，注意与普通值的区别
    printf("该指针指向对象内的数据与长度为%i和%i\n",(*l).data,(*l).length);
}

/*
getchar与putchar示例
*/
void C_Test_IO_1()
{
    char c;
    c = getchar();//getchar()是从stdin逐个读入字符的，只读第一个
    putchar(c);
}
/*
scanf与printf简单示例
*/
void C_Test_IO_2()
{
    int x;
    scanf("%i",&x);//注意%的作用
    printf("输入值为%i",x);
}
/*
scanf与printf进一步示例
*/
void C_Test_IO_3()
{
    //详细见pdf，特别注意对齐等输出方式
    char c = 'x';
    char s[] = "adasdasdasad";//注意C中字符串的声明！！！！！

    /*
    把握shor  int 和 int的输出区别
    */
    int i = 425;
    int i1 = -425;//仅为测试无符号整数
    short int j = 17;

    unsigned int u = 0xf179U;
    long int l = 75000l;
    long long int L = 0x12345678LL;
    float f = 12.798f;

    /*
    注意整数的几种不同输出
    */
    /*
    //o为八进制，x为十六进制，
    //（u为无符号整数），无符号整数与原整数区别
    */
    printf("%i %d %o %x %u\n",i,i,i,i,i);
    printf("%i %u\n",i1,i1);//存在区别
}
/*
getcgar实现readline函数
*/
void myReadLine()
{
    char c;
    while((c =getchar()) != '\n')
    {
        putchar(c);
    }
}
