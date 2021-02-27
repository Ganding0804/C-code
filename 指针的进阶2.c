#include <stdio.h>
#include <stdlib.h>

//指针的进阶2
//数组参数、指针参数
/*
//一维数组传参
void test(int arr[])//ok
{}
void test(int arr[10])//ok []里面写或不写完全不影响
{}
void test(int *arr)//ok
{}
void test2(int *arr[20])//ok
{}
void test2(int **arr)//ok
{}
int main()
{
     int arr[10] = {0};
     int *arr2[20] = {0};
     test(arr);
     test2(arr2);
}

//二维数组传参
void test(int arr[3][5])//ok
{}
void test(int arr[][])//NO
{}
void test(int arr[][5])//ok
{}
//总结：二维数组传参，函数形参的设计只能省略第一个[]的数字。
//因为对一个二维数组，可以不知道有多少行，但是必须知道一行多少元素。
//这样才方便运算。
void test(int *arr)//NO
{}
void test(int* arr[5])//NO
{}
void test(int (*arr)[5])//ok
{}
void test(int **arr)//NO
{}
int main()
{
    int arr[3][5] = {0};
    test(arr);
}

//一级指针传参
void print(int *p, int sz)
{
     int i = 0;
     for(i=0; i<sz; i++)
     {
     printf("%d\n", *(p+i));
     }
}
int main()
{
     int arr[10] = {1,2,3,4,5,6,7,8,9};
     int *p = arr;
     int sz = sizeof(arr)/sizeof(arr[0]);
     //一级指针p，传给函数
     print(p, sz);
     return 0;
}
//当函数的参数部分为一级指针的时候，函数能接收一级指针和地址
void test1(int* p)
{

}
void test2(char* p)
{

}
int main()
{
    int a=10;
    int* p1=&a;
    test1(&a);
    test1(p1);

    char ch='w';
    char* pc=&ch;
    test2(&ch);
    test2(pc);
    return 0;
}

//二级指针传参
void test(int** ptr)
{
    printf("num = %d\n", **ptr);
}
int main()
{
     int n = 10;
     int*p = &n;
     int **pp = &p;
     test(pp);
     test(&p);
     return 0;
}
//当函数的参数为二级指针的时候，可以接收二级指针，一级指针地址和数组指针
*/
void test(char **p)
{

}
int main()
{
     char c = 'b';
     char*pc = &c;
     char**ppc = &pc;
     char* arr[10];
     test(&pc);
     test(ppc);
     test(arr);//Ok
     return 0;
}










