#include <stdio.h>
#include <stdlib.h>

//数据的存储
//数据类型的意义：
//    1.使用这个类型开辟内存空间的大小（大小决定了使用范围）
//    2.如何看待内存空间的视角

//大端存储和小端存储
//大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址中
//小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位，保存在内存的高地址中
/*
//写一段代码测试当前机器的存储模式
int check_sys()
{
    int a=1;
    char *p=(char*)&a;
    if(*p==1)
        return 1;
    else
        return 0;
    //可以直接return *p;
    //最简写法return *(char*)&a;
}

int main()
{
    //返回1，小端
    //返回0，大端
    int ret=check_sys();
    if(ret==1)
        printf("小端\n");
    else
        printf("大端\n");
    return 0;
}
*/

//练习
//输出什么？
/*
int main()
{
    char a= -1;//-1
    signed char b=-1;//-1
    unsigned char c=-1;//255
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}
//整型提升

int main()
{
    char a = -128; //有符号char的范围是-128~127，无符号char的范围是0~255
    printf("%u\n",a);
    //%d - 打印十进制有符号数字
    //%u - 打印十进制无符号数字
    return 0;
}

int main()
{
    char a = 128;//存入为127+1，相当于-128
    printf("%u\n",a);
    return 0;
}

#include <windows.h>
int main()
{
    unsigned int i;
    for(i=9;i>=0;i--)
    {
        printf("%u\n",i);
        Sleep(100);
    }
    return 0;
}

#include <string.h>
int main()
{
    char a[1000];
    int i;
    for(i=0; i<1000; i++)
   {
        a[i] = -1-i;
   }
    printf("%d",strlen(a));//strlen要找'\0'
    return 0;
}


unsigned char i = 0;
int main()
{
    for(i = 0;i<=255;i++)
   {
        printf("hello world\n");
   }
    return 0;
}
*/

//浮点型在内存中的存储
int main()
{
    int n = 9;
    float *pFloat = (float *)&n;
    printf("n的值为：%d\n",n);
    printf("*pFloat的值为：%f\n",*pFloat);
    *pFloat = 9.0;
    printf("num的值为：%d\n",n);
    printf("*pFloat的值为：%f\n",*pFloat);
    return 0;
}






















