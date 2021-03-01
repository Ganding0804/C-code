#include <stdio.h>
#include <stdlib.h>

//指针的进阶3
/*
//函数指针 - 存储函数的地址的指针
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
    //&函数名 和 函数名 都是函数的地址

    int (*p)(int,int)=Add;//函数指针存储
    printf("%d\n",(*p)(a,b));//验证 - *号写与不写都没影响
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


//代码1
( *(void(*)()) 0 )();//把0强制类型转换成：void(*)()函数指针类型 - 0就是一个函数的地址了
//这段代码就是一个函数调用，调用0地址处的函数

//代码2
void (*  signal(int , void(*)(int))  )(int);
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数参数是int，返回类型是void
//signal函数的返回类型也是一个函数指针，该函数指针指向的函数参数是int，返回类型是void

//简化
typedef void(*pfun_t)(int);
pfun_t signal(int,pfun_t);


//函数指针数组
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
    int (*pa)(int,int)=Add;//Sub,Mul,Div都可以存进这个指针
    int (*parr[4])(int,int)={Add,Sub,Mul,Div};//函数指针数组
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("%d\n",parr[i](4,2));//6,2,8,2
    }
    return 0;
}


char* my_strcopy(char* dest,const char* src);
//1.写一个函数指针 pf，能够指向my_strcopy
    char* (*pf)(char*,const char*);
//2.写一个函数指针数组 pfarr，能够存放四个my_strcopy函数的地址
    char* (*pfarr[4])(char*,const char*);
*/

//计算器（函数指针数组用途 - 转移表）
void menu()
{
    printf("**************   计算器   **************\n");
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
    int (*pfArr[5])(int,int)={0,Add,Sub,Mul,Div};//函数指针数组
    do
    {
        menu();
        printf("请输入：\n");
        scanf("%d",&input);
        if(input>=1 && input<=4)
        {
            printf("请输入两个操作数：\n");
            scanf("%d %d",&x,&y);
            int ret=pfArr[input](x,y);
            printf("%d\n",ret);
        }
        else if(input==0)
        {
            printf("退出计算器\n");
        }
        else
        {
            printf("输入错误，请重新输入！\n");
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
        printf("请选择：\n");
        scanf("%d",&input);

        switch(input)
        {
        case 1:
            printf("请输入数字：\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Add(x,y));
            break;
        case 2:
            printf("请输入数字：\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Sub(x,y));
            break;
        case 3:
            printf("请输入数字：\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Mul(x,y));
            break;
        case 4:
            printf("请输入数字：\n");
            scanf("%d %d",&x,&y);
            printf("%d\n",Div(x,y));
            break;
        case 0:
            printf("退出计算器\n");
            break;
        default:
            printf("输入错误，请重新输入！\n");
            break;
        }
    }while(input);
}
*/


















