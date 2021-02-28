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
*/

//函数指针数组
int main()
{
    return 0;
}





