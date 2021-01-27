#include <stdio.h>
#include <stdlib.h>

//函数与递归
//递归的主要思想：把大事化小
/*
// print(1234)
// print(123) 4
// print(12) 3 4
// print(1) 2 3 4

void print(int num)
{
    if(num>9)
    {
        print(num/10);
    }
    printf("%d ",num%10);
}


//接收一个整型值，然后一次打印它的每一位
int main()
{
    int unsigned num=0;
    scanf("%d",&num);  //假设要打印1234
    print(num);
    return 0;
}


//my_strlen("happy birthday to you!")
//1+my_strlen("appy birthday to you!")
//1+1+my_strlen("ppy birthday to you!")
//1+1+1+my_strlen("py birthday to you!")
//......
//1+1+1+...+my_strlen("")  只剩下'\0'

int my_strlen(char* arr)
{
    if(*arr!='\0')
        return 1+my_strlen(arr+1);
    else
        return 0;
}

//编写函数不允许创建临时变量，求字符串长度
int main()
{
    char arr[]="happy birthday to you!";
    int len=my_strlen(arr);
    printf("字符串长度为%d\n",len);
    return 0;
}


int Fac1(int n)  //循环
{
    int i=0;
    int ret=1;
    for(i=1;i<=n;i++)
    {
        ret*=i;
    }
    return ret;
}

int Fac2(int n)  //递归
{
    if(n<=1)
        return 1;
    else
        return n*Fac2(n-1);

}

//用递归的方法求n的阶乘
int main()
{
    int n=0;
    printf("请输入n的值：");
    scanf("%d",&n);
    int ret1=Fac1(n);
    int ret2=Fac2(n);
    printf("%d的阶乘值为%d\n",n,ret1); //循环
    printf("%d的阶乘值为%d\n",n,ret2); //递归
    return 0;
}
*/
/*
int count=0;
int Fib(int n)   //递归的确可以算出来比较靠前的斐波那契数，但是越往后它的效率越低
{                //很多数据都被重复计算
    if(n==3)     //测试第3个斐波那契数被计算了多少次
    {
        count++;
    }
    if(n<=2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}
*/

int Fib(int n)  //这里用循环，效率比较高
{
    int a=1;
    int b=1;
    int c=1;
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}

//打印出第n个斐波那契数
//1,1,2,3,5,8,13,21,34,55...
int main()
{
    int n=0;
    int ret=0;
    printf("请输入；");
    scanf("%d",&n);
    ret=Fib(n);
    printf("第%d个斐波那契数是%d\n",n,ret);
    //printf("第3个斐波那契数被计算了%d次\n",count);
    return 0;
}










