/*
������ϰ
*/

//�����ʼ�����������������
void C_Test_Array_1()
{
    int array1[10];
    int index;

    printf("���δ��ʽ��ֵ�����飺\n");
    for(index = 0;index < 10;index++)
    {
        printf("array[%i] = %i\n",index,array1[index]);
    }
    printf("�����ʽ��ֵ�����飺\n");
    for(index = 0;index < 10;index++)
    {
        array1[index] = index;
    }
    for(index = 0;index < 10;index++)
    {
        printf("array[%i] = %i\n",index,array1[index]);
    }
}

//���������
void C_Test_Array_2()
{
    int caculatorArray[10] = {0};//ע�⼸�ֲ�ͬ�����鸳ֵ����
    int index,counter,response;
    printf("�����������Ӧ��\n");
    for(counter = 0;counter < 20;counter++)
    {
        scanf("%i",&response);
        caculatorArray[response]++;
        if(response >= 10)
        {
            printf("������Ӧ��\n");
        }
    }
    printf("�����Ӧ��\n");
    for(index = 0;index<10;index++)
    {
        printf("%i\n",caculatorArray[index]);
    }
}

//��ȡ쳲�����ֵ
int getFibonacci(int n)
{
    if(n == 1)
        return 0;
    if(n == 2)
        return 1;
    if(n > 2)
        return getFibonacci(n-1) + getFibonacci(n-2);
}

//ʹ������洢쳲��������в����
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
�ṹ����ϰ
*/

//�ṹ�������Լ����ø�ֵ
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

    printf("������%i��%i��%i�ա�\n",myBirthDay.year,myBirthDay.month,myBirthDay.day);
}


/*
ָ����ϰ
*/
//����codeblock��C����&�ں�����ʹ��
/*
****��C�С��ββ�������&��ֵ����C��&������ȡַ��C++�п��ԣ���������
****����ʵ�ο��Դ���
*/
//void C_Test_PointerSymbol(int &l)
typedef struct
{
    int data;
    int length;
}CTest;

//�����Ƿ�������
void C_Test_Pointer_StarSymbol()
{
    //int a = 10;
    //int b;
    //b = &a;
    //printf("�Ƿ����ԣ�%i",*b);
}

//��ָ�룬�ص㻹�Ƕ����Ƿ�������Ҫ�и��˼��⣨���£�
void C_Test_Pointer_1()
{
    int x = 100;
    int *temp;
    temp = &x;//ע�⸳ֵ��ȡһ����ַ�Ž�ȥ,֮��*tempָ��x
    /*
    ������⣺temp�зŵ���һ�������ַ������
    ���Ƿ�����������ϵͳ��������ַ���ɵ�ַ
    ��temp��*temp��ֵ�ǲ�ͬ��
    */
    printf("x�ĵ�ַΪ��%i\n",&x);
    printf("��ַ%i��Ϊ%i\n",temp,*temp);//ע���Ƿ����ܵ���struct��û���Ƿ�###

    /*
    ע��&temp��&*temp������####
    */
    printf("temp�ĵ�ַ��%i\n",&temp);
    printf("x�ĵ�ַΪ��%i\n",&*temp);
}

//��ָ��
void C_Test_Pointer_2()
{
    /*
    ��ʱ��ȻΪ�գ�����δ���ֱ������
    */
    int *temp_1;
    printf("��ַ%i��Ϊ%i\n",temp_1,*temp_1);//ע���Ƿ����ܵ�
}

//���ʽ��ʹ��ָ��(���ָ��ָ��ͬһ��ֵ)
void C_Test_Pointer_3()
{
    int a,b;
    int *p1,*p2;
    a = 2;
    p1 = &a;
    b = *p1*2;
    p2 = p1;
    printf("a=%i,b=%i\n",a,b);
    printf("*p1ָ��:%i\n",*p1);
    printf("p1ֵ:%i\n",p1);
    printf("*p2ָ��:%i\n",*p2);
    printf("p2ֵ:%i\n",p2);
}

//��������ָ��,ע����δ����Լ���������η���
void C_Test_Pointer_4(int *param1)
{
    //�μ���һ������
}

//ָ���ָ��ṹ�壨�򵥽ṹ�嶨�����ϣ�
/*
ע����ΰ�ָ��д���βκ���ʵ�δ���
*/
void C_Test_Pointer_Struct1(CTest *l,CTest ct)//ע�����Ƿ���������&��&��Ӧ����C++������
{
    printf("��ǰ�ýṹ��λ�ڵ�ַ��%i\n",&ct);
    printf("��ǰ�ýṹ�������볤��Ϊ%i��%i\n",ct.data,ct.length);
    printf("��ָ���ڵ�ֵΪ��%i\n",l);

    /*
    ע�������������
    ˵��-���Ѿ����Ƿ�������
    ���Ƿ���Ȼ������Ϊ���ʵ��ֶΣ����£�
    */
    printf("��ָ��ָ������ڵ������볤��Ϊ%i��%i\n",l->data,l->length);//�˴��ֲ����Ƿ���ע������ֵͨ������
    printf("��ָ��ָ������ڵ������볤��Ϊ%i��%i\n",(*l).data,(*l).length);
}

/*
getchar��putcharʾ��
*/
void C_Test_IO_1()
{
    char c;
    c = getchar();//getchar()�Ǵ�stdin��������ַ��ģ�ֻ����һ��
    putchar(c);
}
/*
scanf��printf��ʾ��
*/
void C_Test_IO_2()
{
    int x;
    scanf("%i",&x);//ע��%������
    printf("����ֵΪ%i",x);
}
/*
scanf��printf��һ��ʾ��
*/
void C_Test_IO_3()
{
    //��ϸ��pdf���ر�ע�����������ʽ
    char c = 'x';
    char s[] = "adasdasdasad";//ע��C���ַ�������������������

    /*
    ����shor  int �� int���������
    */
    int i = 425;
    int i1 = -425;//��Ϊ�����޷�������
    short int j = 17;

    unsigned int u = 0xf179U;
    long int l = 75000l;
    long long int L = 0x12345678LL;
    float f = 12.798f;

    /*
    ע�������ļ��ֲ�ͬ���
    */
    /*
    //oΪ�˽��ƣ�xΪʮ�����ƣ�
    //��uΪ�޷������������޷���������ԭ��������
    */
    printf("%i %d %o %x %u\n",i,i,i,i,i);
    printf("%i %u\n",i1,i1);//��������
}
/*
getcgarʵ��readline����
*/
void myReadLine()
{
    char c;
    while((c =getchar()) != '\n')
    {
        putchar(c);
    }
}
