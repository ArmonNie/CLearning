#ifndef SCANF_C
#define SCANF_C

#include <stdio.h>
#include <string.h>
#include <stdarg.h>//�ṩ��va_list��
#include <ctype.h>

/*
 �Զ��������¼�뺯�������ڴ��ļ���ȡ��ʽ������
 ��fscanf��ͬ����ֻ��ȡ�����ַ�
*/
/*
int Scanf(FILE *fp,char *format,...)//...��c�д��ݲ�����һ�ַ���
{
    int *i;
    char *ch,*s;
    float *f;
    int count,k,len,n;
    int temp;
    va_list ap;//C��֪ʶ

    len = strlen(format);
    va_start(ap,format);//c֪ʶ

    for(count = 0,k = 2;k<=len;k += 2)
    {
        while((temp = getc(fp)) != EOF)//�������з������ַ�
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

            if(format[k-1] == 'c')//��ȡ�ַ�
            {
                ch = va_arg(ap,char *);
                if(temp != EOF)
                {
                    count += fscanf(fp,"%c",ch);
                }

            }
            if(format[k-1] == 'd')//��ȡ����
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
            if(format[k-1] == 'f')//��ȡ������
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
            if(format[k-1] == 's')//��ȡ�ַ���
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
