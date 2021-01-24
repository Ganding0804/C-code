#include <stdio.h>
#include <stdlib.h>

//从大到小打印三位数字
int main()
{
    int a=0,b=0,c=0;
    printf("请输入三个整数：");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        int tmp=a;   //tmp是中间变量
        a=b;
        b=tmp;
    }
    if(a<c)
    {
        int tmp=a;
        a=c;
        c=tmp;
    }
    if(b<c)
    {
        int tmp=b;
        b=c;
        c=tmp;
    }
    printf("这三个整数从大到小排列为：%d %d %d\n",a,b,c);
    return 0;
}


//打印1~100之间3的倍数的数
int main()
{
    int i=0;
    for(i=1;i<100;i++)
    {
        if(i%3==0)
            printf("%d\n",i);
    }
    return 0;
}


//求最大公约数
int main()
{
    int m=0;
    int n=0;
    int r=0;
    scanf("%d %d",&m,&n);
    while(m%n)  //m%n==0，即为假时，会跳出循环
    {
        r=m%n;
        m=n;      //辗转相除法
        n=r;
    }
    printf("%d\n",n);
    return 0;
}


//打印闰年
int main()
{
    int year=0;
    int count=0;  //count用来计算闰年出现的次数
    for(year=2000;year<2022;year++)
    {
        //判断闰年的方法：
        //1.能被4整除但不能被100整除；
        //2.能被400整除。
        if(year%4==0 && year%100!=0)
        {
            printf("%d ",year);
            count++;
        }
        else if(year%400==0)
        {
            printf("%d ",year);
            count++;
        }
        //if(((year%4==0)&&(year%100!=0))||(year%400==0))    //此处两种表示方法都可以
        //{
        //    printf("%d ",year);
        //    count++;
        //}
    }
    printf("\n总共出现%d次闰年\n",count);
    return 0;
}


//打印出100~200之间的素数
int main()
{
    int i=0;
    int count=0;
    for(i=100;i<=200;i++)   //第二种是直接排除所有偶数，即i=100->i=101,i++->i+=2
    {
        //判断i是否为素数
        //方法很多，此处采用试除法
        int j=0;
        for(j=2;j<i;j++)    //此处算法还可优化,第一种是使用sqrt开平方数学库函数，将j<i中的i替换为sqrt(i)
        {                                      //应用sqrt()需要添加#include <math.h>
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)                               //将i==j替换成j>sqrt(i)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n总计%d个素数\n",count);
    return 0;
}


//编写程序数一下1~100所有整数之间出现多少个数字9
int main()
{
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%10==9)
            count++;
        if(i/10==9)
            count++;        //之所以写两个if，是因为99里面有两个数字9，要统计两次，所以用两个if来分开统计
    }
    printf("总计出现%d个数字9\n",count);
    return 0;
}


//计算1/1-1/2+1/3-1/4+...+1/99-1/100的结果并打印出来
int main()
{
    int i=0;
    float sum=0;
    int flag=1;
    for(i=1;i<=100;i++)
    {
        sum+=flag*1.0/i;
        flag=-flag;
    }
    printf("计算结果为：%lf\n",sum);
    return 0;
}


//求10个数中间的最大数
int main()
{
    int arr[]={-40,12,34,-57,68,71,24,56,87,0};
    int max=arr[0];   //这里不用max=0是因为如果数组里面的数全为负数的话，最后结果会打印出0
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);   //日常计算数组元素个数
    for(i=0;i<sz;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("最大数是%d",max);
    return 0;
}


//打印一个9x9乘法表
int main()
{
    int i=0;
    int j=0;
    printf("九九乘法表：\n");
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}



