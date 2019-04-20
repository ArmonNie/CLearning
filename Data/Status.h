#ifndef STATUS_H
#define STATUS_H

/*
什么是宏函数？？
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

/*宏函数定义,"\"*/
//让程序暂停一会
#define Wait(x)\
{\
    double _Loop_Num_;\
    for(_Loop_Num_=0.01；_Loop_Num_<=1000.0*x;_Loop_Num_+=0.01)\
    ;\
}//设立一个空循环

//按Enter键继续
#define PressEnter\
{\
    fflush(stdin);\
    printf("Press Enter");\
    getchar();\
    fflush(stdin);\
}

#endif
