#ifndef STATUS_H
#define STATUS_H

/*
ʲô�Ǻ꺯������
*/

#define TRUE 1
#define FALSE 0
#define YES 1
#define NO 0
#define OK 1
#define ERROR 0
#define SUCCESS 1
#define UNSUCCESS 0
#define INFEASIBLE -1

#ifndef _MATH_H
#define OVERFLOW -2
#define UNDERFLOW -3
#endif

typedef int Status;

/*�꺯������,"\"*/
//�ó�����ͣһ��
#define Wait(x)\
{\
    double _Loop_Num_;\
    for(_Loop_Num_=0.01��_Loop_Num_<=1000.0*x;_Loop_Num_+=0.01)\
    ;\
}//����һ����ѭ��

//��Enter������
#define PressEnter\
{\
    fflush(stdin);\
    printf("Press Enter");\
    getchar();\
    fflush(stdin);\
}

#endif
