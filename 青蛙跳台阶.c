#include <stdio.h>
#include <stdlib.h>

//青蛙跳台阶问题
//一只青蛙一次可以跳上1级台阶，也可以跳上2级。求该青蛙跳上一个n级的台阶总共有多少种跳法。

//   n-> 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 ...
// sum-> 1 , 2 , 3 , 5 , 8 , 13, 21, 34, 55, 89 ...
//不难发现类似于斐波那契数列，f(n)=f(n-1)+f(n-2)

int jump1(int n)   //递归
{
    if(n<=3)
        return n;
    else
        return jump1(n-1)+jump1(n-2);
}

int jump2(int n)   //非递归
{
    int a=1;
    int b=2;
    int c=3;
    if(n<=2)
        return n;
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}

int main()
{
    int n=0;
    int ret1=0;
    int ret2=0;
    printf("请输入台阶数：");
    scanf("%d",&n);
    ret1=jump1(n);
    ret2=jump2(n);
    printf("总共有%d次跳法\n",ret1);
    printf("总共有%d次跳法\n",ret2);
    return 0;
}

//模仿打印斐波那契数列的问题就行，采用非递归方式效率比较高
