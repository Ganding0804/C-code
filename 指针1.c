#include <stdio.h>
#include <stdlib.h>

//指针详解
//指针中常用的操作符就是*和&，*是解引用操作符，所谓的解引用可以理解为取指针指向地址的内容的。
/*
int main()
{
    int a=10;
    int* p=&a; //指针其实就是一个变量，变量里面存的是地址
    //存放在指针中的值都被当成地址处理
    return 0;
}
//指针的大小在32位平台是4个字节，在64位平台是8个字节
*/
/*
int main()
{
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(double*));
    //结果都为4，编译器默认32位平台
    return 0;
}
*/
/*
int main()
{
    int a=0x11223344;
    //int* pa=&a;
    //*pa=0;
    char* pa=&a;
    *pa=0;
    //char* pc=&a;
    //printf("%p\n",pa);
    //printf("%p\n",pc);
    return 0;
}
//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//int*p - *p能够访问4个字节
//char*p - *p能够访问1个字节
//double*p - *p能够访问8个字节


int main()
{
    int a=0x11223344;
    int* pa=&a;
    char* pc=&a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);

    printf("%p\n",pc);
    printf("%p\n",pc+1);
    return 0;

}
//指针类型决定了走一步走多远（指针的步长）
//int*p: p+1 --> 4
//char*p: p+1 --> 1
//double*p: p+1 --> 8


int main()
{
    int arr[10]={0};
    int* p=arr;//数组名-首元素地址
    int i=0;
    for(i=0;i<10;i++)
    {
        *(p+i)=1;
    }
    return 0;
}
//这里用int类型的指针可以实现把数组arr里面的元素全部换成1
//如果用char类型的话就无法实现了
*/

/*
//野指针：野指针就是指针指向的位置是不可知的（随机的、不正确的、没有明确限制的）
//成因1：未初始化
int main()
{
    int a;//局部变量不初始化，默认是随机值
    int* p;//局部的指针变量，就被初始化随机值，即成为了野指针
    *p=20;
    return 0;
}

//成因2：指针越界访问
int main()
{
    int arr[10]={0};
    int* p=arr;
    int i=0;
    for(i=0;i<12;i++)
    {
        p++;
    }
    //当指针指向的范围超出数组arr的范围时，p就成为了野指针
    return 0;
}
*/
//成因3：指针指向的空间释放
int* test()
{
    int a=10;
    return &a;//虽然&a很好的传过去了，但是函数结束后，a所在的空间就被释放了
}

int main()
{
    int *p=test();
    *p=20;
    return 0;
}




