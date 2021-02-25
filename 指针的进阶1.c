#include <stdio.h>
#include <stdlib.h>

//指针的进阶
//字符指针
/*
int main()
{
    char arr[] ="hello world!";
    char* pc = arr;
    printf("%s\n",arr);
    printf("%s\n",pc);
    return 0;
}

int main()
{
    const char* p = "abcdef";//“abcdef”是一个常量字符串，这里本质上是把首元素的地址放进指针
    *p = 'w'; //段错误 - 内存访问错误  不能这样写
    printf("%s\n",p);
    return 0;
}

int main()
{
    char arr1[]="abcdef";
    char arr2[]="abcdef";
    const char* p1="abcdef";
    const char* p2="abcdef";

    if(p1==p2)
    {
         printf("hehe\n"); //打印hehe
    }
    else
    {
        printf("haha\n");
    }

    //if(arr1==arr2)
    //{
    //    printf("hehe\n");
    //}
    //else
    //{
    //    printf("haha\n"); //打印haha
    //}
    return 0;
}

int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char *str3 = "hello bit.";
    char *str4 = "hello bit.";
    if(str1 ==str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");//正确

    if(str3 ==str4)
        printf("str3 and str4 are same\n");//正确
    else
        printf("str3 and str4 are not same\n");
    return 0;
}


//指针数组 - 用来存放指针的数组
int main()
{
    int arr[10]={0};//整形数组
    char ch[5]={0};//字符数组
    int* parr[4];//存放整形指针的数组 - 指针数组
    char* pch[5];//存放字符指针的数组 - 指针数组
    return 0
}

int main()
{
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    int* arr[4]={&a,&b,&c,&d};
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("%d ",*(arr[i]));
    }
    return 0;
}

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,5,6};
    int arr3[]={3,4,5,6,7};

    int* parr[]={arr1,arr2,arr3};
    int i=0;
    for(i=0;i<3;i++)
    {
        int j=0;
        for(j=0;j<5;j++)
        {
            printf("%d ",*(parr[i]+j));
        }
        printf("\n");
    }
    return 0;
}
*/

//数组指针 - 指向数组的指针
int main()
{
    //int* p=NULL;//p是整形指针 - 指向整形的指针 - 可以存放整形的地址
    //char* pc=NULL;//pc是字符指针 - 指向字符的指针 - 可以存放字符的地址

    //int arr[10]={0};
    //arr - 首元素地址
    //&arr[0] - 首元素地址
    //&arr - 数组的地址

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=&arr;//*p要括起来的原因是[]的优先级比*高，否则就成了指针数组了
    //上面的这个p就是数组指针
    return 0;
}










