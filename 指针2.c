#include <stdio.h>
#include <stdlib.h>

//指针运算
//1.指针加减整数
/*
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int* p=&arr[9];
    int i=0;
    //for(i=0;i<sz;i++)
    //{
    //   printf("%d\n",*p);
    //    p++;
    //}
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
        p-=2;
    }
    return 0;
}
*/

/*
//2.指针减去指针（指向同一空间，即在同一个数组）
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",&arr[9]-&arr[0]);//得到的结果其实是指针和指针中间的元素个数（大减小）
    return 0;
}

int my_strlen(char* str)
{
    char* start=str;
    char* end=str;
    while(*end!='\0')
    {
        end++;
    }
    return end-start;
}

int main()
{
    //strlen - 求字符串长度
    //模拟实现strlen,之前已经展示了两种方法，计数器方式和递归方式
    char arr[]="happy birthday!";
    int len =my_strlen(arr);
    printf("%d\n",len);
    return 0;
}


//指针的关系运算（比较大小）
#define N 5
int main()
{
    int values[N];
    int* vp;
    for(vp=&values[N];vp>&values[0];)
    {
        *--vp=0;
    }

    //for(vp=&values[N];vp>&values[0];vp--)
    //{
    //    *vp=0;
    //}
    //这两种方法实际上在绝大多数的编译器上面是可以顺利完成任务的，但是我们最后写前面那种。
    //C语言的标准规定：允许指向数组元素的指针与指向数组最后一个元素后面的那个内存位置的指针比较，
    //但是不允许与指向第一个元素之前的那个内存位置的指针进行比较。
    return 0;
}
*/
/*
//指针和数组
int main()
{
    int arr[10]={0};
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    return 0;
}

int main()
{
    int arr[10]={0};
    int* p=arr;
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%p  =====  %p\n",p+i,&arr[i]);
    }
    return 0;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
//数组可以通过指针来很好的访问


//二级指针
int main()
{
    int a=10;
    int * pa=&a;
    int * *ppa=&pa;//ppa就是二级指针
    //int ***pppa=&ppa
    printf("%d\n",**ppa);
    return 0;
}
*/

//指针数组 - 数组 - 存放指针的数组
//数组指针 - 指针 -

int main()
{
    int a=10;
    int b=20;
    int c=30;
    int* pa=&a;
    int* pb=&b;
    int* pc=&c;
    //整型数组 - 存放整型
    //字符数组 - 存放字符
    //指针数组 - 存放指针
    int* arr[3]={&a,&b,&c};//指针数组
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("%d ",*(arr[i]));
    }
    return 0;
}

