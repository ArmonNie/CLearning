#ifndef SCANF_C
#define SCANF_C

#include <stdio.h>
#include <string.h>
#include <stdarg.h>//提供宏va_list等
#include <ctype.h>

/*
 自定义的数据录入函数，用于从文件读取格式化输入
 与fscanf不同，此只读取西文字符
*/
/*
int Scanf(FILE *fp,char *format,...)//...是c中传递参数的一种方法
{
    int *i;
    char *ch,*s;
    float *f;
    int count,k,len,n;
    int temp;
    va_list ap;//C中知识

    len = strlen(format);
    va_start(ap,format);//c知识

    for(count = 0,k = 2;k<=len;k += 2)
    {
        while((temp = getc(fp)) != EOF)//跳过所有非西文字符
        {
            if(temp > 0 && temp <127)
            {
                ungetc(temp,fp);
                break;
            }
        }

            if(temp == EOF){
                break;
            }

            if(format[k-1] == 'c')//读取字符
            {
                ch = va_arg(ap,char *);
                if(temp != EOF)
                {
                    count += fscanf(fp,"%c",ch);
                }

            }
            if(format[k-1] == 'd')//读取整形
            {
                i = va_arg(ap,int *);
                while((temp = getc(fp)) != EOF)
                {
                    if((temp >= '0' && temp <= '9') || temp=='-' || temp == '+')
                    {
                        ungetc(temp,fp);
                        break;
                    }

                }
                if(temp != EOF)
                {
                    count += fscanf(fp,"%d",i);
                }
            }
            if(format[k-1] == 'f')//读取浮点数
            {
                f = va_arg(ap,float *);
                while((temp = getc(fp)) != EOF)
                {
                    if((temp >= '0' && temp <= '9') || temp=='-' || temp == '+' || temp == '.')
                    {
                        ungetc(temp,fp);
                        break;
                    }

                }
                if(temp != EOF)
                {
                    count += fscanf(fp,"%f",f);
                }
            }
            if(format[k-1] == 's')//读取字符串
            {
                s = va_arg(ap,char *);
                while((((temp = getc(fp) != EOF) && (isprint(temp)) || temp == ''))){
                }
                ;

                n = 0;
                if(!feof(fp))
                {
                    ungetc(temp,fp);
                    while((temp = getc(fp)) != EOF)
                    {
                        if(isprint(temp) && temp =='')
                            s[n+1] = temp;
                        else
                            break;
                    }
                    ungetc(temp,fp);
                }
                s[n] = '\0';
                count++;
            }
        }


    va_end(ap);
    return count;
}
*/


#endif
