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


//����ָ������
int Add(int x,int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Mul(int x,int y)
{
    return x*y;
}
int Div(int x,int y)
{
    return x/y;
}
int main()
{
    int (*pa)(int,int)=Add;//Sub,Mul,Div�����Դ�����ָ��
    int (*parr[4])(int,int)={Add,Sub,Mul,Div};//����ָ������
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("%d\n",parr[i](4,2));//6,2,8,2
    }
    return 0;
}


char* my_strcopy(char* dest,const char* src);
//1.дһ������ָ�� pf���ܹ�ָ��my_strcopy
    char* (*pf)(char*,const char*);
//2.дһ������ָ������ pfarr���ܹ�����ĸ�my_strcopy�����ĵ�ַ
    char* (*pfarr[4])(char*,const char*);
*/

//������������ָ��������; - ת�Ʊ�
void menu()
{
    printf("**************   ������   **************\n");
    printf("*******     1.Add      2.Sub     *******\n");
    printf("*******     3.Mul      4.Div     *******\n");
    printf("*******           0.Exit         *******\n");
    printf("****************************************\n");
}
int Add(int x,int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Mul(int x,int y)
{
    return x*y;
}
int Div(int x,int y)
{
    return x/y;
}

int main()
{
    int input=0;
    int x=0;
    int y=0;
    int (*pfArr[5])(int,int)={0,Add,Sub,Mul,Div};//����ָ������
    do
    {
        menu();
        printf("�����룺\n");
        scanf("%d",&input);
        if(input>=1 && input<=4)
        {
            printf("������������������\n");
            scanf("%d %d",&x,&y);
            int ret=pfArr[input](x,y);
            printf("%d\n",ret);
        }
        else if(input==0)
        {
            printf("�˳�������\n");
        }
        else
        {
            printf("����������������룡\n");
        }
    }while(input);
    return 0;
}
/*
int main()
{
    int input=0;
    int x=0;
    int y=0;
    do
    {
        menu();
        printf("��ѡ��\n");
        scanf("%d",&input);

        switch(input)
        {
        case 1:
            printf("���������֣�\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Add(x,y));
            break;
        case 2:
            printf("���������֣�\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Sub(x,y));
            break;
        case 3:
            printf("���������֣�\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Mul(x,y));
            break;
        case 4:
            printf("���������֣�\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Div(x,y));
            break;
        case 0:
            printf("�˳�������\n");
            break;
        default:
            printf("����������������룡\n");
            break;
        }
    }while(input);
}
*/


















