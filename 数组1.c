#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//数组

//一维数组
/*
int main()
{
    int arr1[10]={1,2,3}; //不完全初始化，十个字节只初始化了四个，包括'\0'
    int arr2[]={1,2,3,4};
    int arr3[5]={1,2,3,4,5};
    char arr4[3]={'a',98,'c'}; //因为这里是字符类型，98就会按照ASCII码转换为对应的字符'b'
    char arr5[]={'a','b','c'};
    char arr6[]="abcdef";
    return 0;
}
*/
/*
int main()
{
    char arr[]="abcdef";
    printf("%d\n",sizeof(arr));
    //sizeof计算arr所占空间的大小，包括'\0'
    printf("%d\n",strlen(arr));
    //strlen求字符串的长度，即'\0'之前的字符个数
    return 0;
}

//1.strlen和sizeof没有什么关联
//2.strlen是求字符串长度--只能针对字符串长度--是库函数，使用得引头文件#include <string.h>
//3.sizeof可以用于计算变量、数组、类型的大小--单位是字节--是操作符


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};  //一维数组在内存中是连续存放的
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        printf("&arr[%d]=%p\n",i,&arr[i]);  //这里用&arr[i]是取地址--对应%p
    return 0;
}


//二维数组
int main()
{
    //二维数组得创建和初始化
    int arr1[3][4]={1,2,3,4};
    int arr2[3][4]={{1,2},{4,5}};  //用大括号括起来可以把元素分配到不同的行里面去
    int arr3[][4]={{2,3},{4,5}};   //二维数组初始化 行可以省略
    return 0;
}
*/

//二维数组遍历
int main()
{
    int arr[3][4]={{1,2},{3,4,5},{6,7,8,9}};
    int i=0;
    for(i=0;i<3;i++)
    {
        int j;
        for(j=0;j<4;j++)
        {
            printf("%d %p  ",arr[i][j],&arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//通过运行结果不难发现，其实二维数组在内存中也是连续存放的

















