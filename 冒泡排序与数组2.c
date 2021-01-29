#include <stdio.h>
#include <stdlib.h>
/*
//冒泡排序
void bubble_sort(int arr[],int sz)
{
    //确定冒泡排序的趟数
    int i=0;
    int flag=1;
    for(i=0;i<sz-1;i++)
    {
        //每一趟冒泡排序
        int j=0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;
            }
            if(flag==1)
                break;
        }
    }
}
//升序
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int sz=sizeof(arr)/sizeof(arr[0]);
    printf("从小到大:");
    bubble_sort(arr,sz);
    int i=0;
    //遍历打印排序后的数组
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
*/
//数组传参的时候，传递过去的是数组首元素的地址（有两个例外）
//1.sizeof(数组名)，计算整个数组的大小，sizeof内部单独放一个数组名，表示整个数组
//2.&数组名，取出的是数组的地址。&数组名，数组表示整数组

int main()
{
    int arr[10]={1,2,3,4};
    //1.
    printf("%d\n",sizeof(arr));
    //2.
    printf("%d\n",*arr);
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    //加一之后比较地址，发现&arr是表示整个数组
    return 0;
}







