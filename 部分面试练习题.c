#include <stdio.h>
#include <stdlib.h>

//面试题练习

/*
int main()
{
    int arr[]={1,2,3,4,5};  //int类型占四个字节
    short *p=(short*)arr;  //这里把int类型强制转换成short类型，而short类型占两个字节
    int i=0;
    for(i=0;i<4;i++)  //循环四次，两次才能把一个int类型改成0
    {
        *(p+i)=0;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);  //结果就是0 0 3 4 5
    }
    return 0;
}
*/

/*
int main()
{
    int a=0x11223344;  //在内存中存放的a其实是倒着来的 - 44 33 22 11
    char *pc=(char*)&a;  //强制转换，char类型占一个字节
    *pc=0;  //这里仅将44 33 22 11中的44改写成了00
    printf("%x\n",a);  //%x是读入16进制整数
    //结果打印出来就是11223300
    return 0;
}
*/

/*
int i;//因为i在这里是一个全局变量，当全局变量不初始化时默认为0
int main()
{
    i--;
    if(i>sizeof(i))//sizeof计算的是数组\类型所占内存的大小 恒>=0 结果是无符号数
    {                 //而这里i=-1，要与sizeof(i)=4进行比较，需要将-1转换成无符号数
        printf(">\n"); // 10000000000000000000000000000001 - 原码
    }                  // 11111111111111111111111111111110 - 反码
    else               // 11111111111111111111111111111111 - 补码
    {                  //当-1转换成无符号数的时候，代表符号位的1就有数字上的意义了，这么大的一个数自然比4大了
        printf("<\n");
    }
    return 0;
}
*/

/*
int main()
{
    int a,b,c;
    a = 5;
    c = ++a; //这里先+1再把值赋给c - c=6 a=6
    b = ++c, c++, ++a, a++;  //因为这里赋值符号'='的优先级大于','，所以要把b = ++c看作逗号表达式的一部分
    // b=7 c=7 ->c=8 ->a=7 ->a=8 总得a=8 b=7 c=8
    b += a++ + c; //这里优先级++ > + > +=
    // a=9 b=25 c=8
    printf("a = %d b = %d c = %d\n",a,b,c);
    return 0;
}
*/

/*
//找出一个数的二进制数中1的个数
int Count(int a)
{
    int count=0;
    //int i=0;
    //for(i=0;i<32;i++)
    //{
    //    if(((a>>i)&1)==1)
    //    {
    //        count++;
    //    }
    //}

    while(a)
    {
        a=a&(a-1);
        count++;
    }
    //最高效算法
    return count;
}

int main()
{
    int a=0;
    printf("请输入数字：");
    scanf("%d",&a);
    int count=Count(a);
    printf("count = %d\n",count);
    return 0;
}
*/

/*
//比较两个数m、n的二进制数有多少位不相同
int get_diff(int m,int n)
{
    int tmp=m^n;
    int count=0;
    while(tmp)
    {
        tmp=tmp&(tmp-1);
        count++;
    }
    return count;
}

int main()
{
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    int count=get_diff(m,n);
    printf("有%d位不相同\n",count);
    return 0;
}
*/
/*
//打印一个数的二进制数的奇数位和偶数位
void print(int a)
{
    int i=0;
    printf("奇数位：");
    for(i=30;i>=0;i-=2)
    {
        printf("%d ",(a>>i)&1);
    }
    printf("\n");
    printf("偶数位：");
    for(i=31;i>=0;i-=2)
    {
        printf("%d ",(a>>i)&1);
    }
}

int main()
{
    int a=0;
    printf("请输入数字：");
    scanf("%d",&a);
    print(a);
    return 0;
}
*/
/*
//用递归的方法逆置字符序列并打印出来
int my_strlen(char *arr)
{
    int count=0;
    while(*arr!='\0')
    {
        count++;
        arr++;
    }
    return count;
}

void reverse_string(char arr[])
{
    int tmp=arr[0];
    int len=my_strlen(arr);
    arr[0]=arr[len-1];
    arr[len-1]='\0';
    if(my_strlen(arr+1)>=2)
        reverse_string(arr+1);
    arr[len-1]=tmp;
}

int main()
{
    char arr[]="abcdef";
    reverse_string(arr);
    printf("%s\n",arr);
}
*/
/*
//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
int DigitSum(int a)
{
    if(a!=0)
        return a%10+DigitSum(a/10);
}

int main()
{
    int a=0;
    printf("请输入数字：");
    scanf("%d",&a);
    int sum=DigitSum(a);
    printf("组成数字之和为%d\n",sum);
    return 0;
}
*/

//用一个递归函数计算n的k次方
double Pow(int n,int k)
{
    if(k>0)
        return n*Pow(n,k-1);
    else if(k<0)
        return (1.0/Pow(n,-k));
    else
        return 1;
}

int main()
{
    int n=0;
    int k=0;
    printf("请输入n和k的值：");
    scanf("%d %d",&n,&k);
    double ret=Pow(n,k);
    printf("%d的%d次方计算结果为%lf\n",n,k,ret);
    return 0;
}












