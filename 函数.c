#include <stdio.h>
#include <stdlib.h>

//判读素数的函数，若为素数返回1，反之返回0
int is_prime(int n)
{
    int j=0;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
            return 0;  //return 0可以直接结束函数
    }
    return 1;

}

int main()
{
    int i=0;
    int count=0;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i)==1)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n总计：%d\n",count);
    return 0;
}


//判断闰年的函数
int is_leap(int n)
{
    if(((n%4==0)&&(n%100!=0))||(n%400==0))
        return 1;
    else
        return 0;
}

int main()
{
    int year=0;
    int count=0;
    for(year=2000;year<2022;year++)
    {
        if(is_leap(year)==1)
        {
            printf("%d ",year);
            count++;
        }
    }
    printf("\n总计：%d\n",count);
    return 0;
}


//二分查找函数
int binary_search(int arr[],int k,int sz) //arr[]在这里本质上是一个指针，所以不能在函数内部求参数部分数组的长度
{                                         //这里就在主函数里面求得sz，然后再把它传进来
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2; //中间元素下标
        if(arr[mid]<k)
        {
            left=mid+1;
        }
        else if(arr[mid]>k)
        {
            right=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int k;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);
    printf("请输入需要查找的数字：");
    scanf("%d",&k);
    int ret=binary_search(arr,k,sz);//此处的arr传递过去的是arr数组首元素的地址，不能用于在函数内部计算数组长度
    //找到了返回下标，没找到返回-1
    if(ret==-1)
        printf("找不到指定数字\n");
    else
        printf("找到了，下标是：%d\n",ret);

    return 0;
}


//写一个每运行一次，num就加一的函数
void ADD(int *p)
{
    (*p)++;  //这里之所以要把*p括起来，是因为++的优先级比*要高，
}            //所以为了实现*p的加一，这里要用括号括起来

int main()
{
    int num=0;
    ADD(&num);
    printf("num=%d\n",num);
    ADD(&num);
    printf("num=%d\n",num);
    ADD(&num);
    printf("num=%d\n",num);
    return 0;
}

















