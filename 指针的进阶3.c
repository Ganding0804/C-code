#include <stdio.h>
#include <stdlib.h>

//ָ��Ľ���3
/*
//����ָ�� - �洢�����ĵ�ַ��ָ��
int Add(int x,int y)
{
    int z=0;
    z=x+y;
    return z;
}

int main()
{
    int a=10;
    int b=20;
    //printf("%d\n",Add(a,b));

    //printf("%p\n",&Add);
    //printf("%p\n",Add);
    //&������ �� ������ ���Ǻ����ĵ�ַ

    int (*p)(int,int)=Add;//����ָ��洢
    printf("%d\n",(*p)(a,b));//��֤ - *��д�벻д��ûӰ��
    return 0;
}


void Print(char*str)
{
    printf("%s\n",str);
}

int main()
{
    void (*p)(char*)=Print;
    (*p)("happy birthday!");
    return 0;
}


//����1
( *(void(*)()) 0 )();//��0ǿ������ת���ɣ�void(*)()����ָ������ - 0����һ�������ĵ�ַ��
//��δ������һ���������ã�����0��ַ���ĺ���

//����2
void (*  signal(int , void(*)(int))  )(int);
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int������������void
//signal�����ķ�������Ҳ��һ������ָ�룬�ú���ָ��ָ��ĺ���������int������������void

//��
typedef void(*pfun_t)(int);
pfun_t signal(int,pfun_t);
*/

//����ָ������
int main()
{
    return 0;
}





