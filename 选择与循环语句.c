#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//分支语句
/*
//if语句
int main()
{
   int age = 0;
   scanf("%d",&age);
   if(age<18)
   {
       printf("未成年\n");
   }
   else if(age>=18 && age<30)
   {
       printf("成年\n");
   }
   else if(age>=30 && age<50)
   {
       printf("壮年\n");
   }
   else if(age>=50 && age<100)
   {
       printf("老年\n");
   }
   else
   {
       printf("老不死\n");
   }
    return 0;
}
//if语句中else的匹配问题，如果有多个if和else，而且没有被大括号括起来，那么else会匹配离它最近的那个if，切记


//switch语句
int main()
{
    int day = 0;
    scanf("%d",&day);
    switch(day)  //switch语句这个括号里面，必须是整型常量表达式
    {
    case 1:
        printf("星期一\n");
        break;  //break的作用是跳出switch语句
    case 2:
        printf("星期二\n");
        break;
    case 3:
        printf("星期三\n");
        break;
    case 4:
        printf("星期四\n");
        break;
    case 5:
        printf("星期五\n");
        break;
    case 6:
        printf("星期六\n");
        break;
    case 7:
        printf("星期天\n");
        break;
    default:  //default子句是当switch表达式的值并不匹配所有case表签的值时，才会执行
        printf("输入错误");  //每个switch语句中只能出现一个default子句，其位置可以在case标签可所在的任意一个位置
        break;
    }
    return 0;
}


//循环语句

//while语句
int main()
{
    int i = 0;
    while(i<=10)
    {
        i++;
        if(i == 5)
            continue;  //continue是用于终止本次循环的，即本次循环往后的代码不会再执行，而是直接跳转到下一次循环
        printf("%d \n",i);
        if(i == 8)
            break;  //break是用于永久终止循环的
    }
    return 0;
}

int main()
{
    int ch;
    int password[20] = {0};
    printf("请输入密码：");
    scanf("%s",&password);
    if((ch=getchar())=='Y')
    {
        printf("确认密码");
    }
    else
        printf("放弃确认");
    return 0;
}*/
/*我写这段程序的原因是想研究一下getchar()，在codeblocks里面这段程序是能够运行成功的，
  但是如果在VS里面写的话就有可能出现错误，原因是输入完密码之后，回车之后换行意思的转义字符'\n'，
  会被记录在输入缓冲区内，从而直接被getchar()读走。（可以将getchar()里面的内容打印出来，发现是10，而10对应ASCII码表中的'\n'）
  想要解决这个问题，可以在scanf下一行写代码，目的是把输入缓冲区清空，代码如下
  while((ch=getchar())!='\n')
  {
      ;
  }
  这样就可以解决问题了

*/

//for循环语句（使用最广泛的循环语句）
/*
int main()
{
    int i=0;
    for(i=1;i<11;i++)  //for语句里面的表达式有时候是可以省略的，建议熟练之前不要省略
    {
        printf("%d \n",i);   //break和continue也可以在这里正常使用
    }
    return 0;
}*/
/*注意：1.不可在for循环体内修改循环变量，防止for循环失去控制。
        2.建议for语句的循环控制变量的取值采用“前闭后开区间”写法。
          eg：i<=10 --> i<11
*/

//do...while()循环语句
/*
int main()
{
    int i=0;
    do
    {
        printf("%d \n",i);
        i++;
    }
    while(i<11);
    return 0;
}
*/
//do...while循环语句至少循环一次，这个语句不常用。

//练习1:实现n的阶乘
/*
int main()
{
    int i=0,n=0;
    int z=1;
    printf("请输入n（n为正整数）：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=z*i;
    }
    printf("%d\n",z);
    return 0;
}


//练习2:计算1!+2!+3!+...+n!

int main()
{
    int i=0,n=0;
    int z=1,sum=0;
    printf("请输入n（n为正整数）：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z*=i;
        sum+=z;
    }
    printf("%d\n",sum);
    return 0;
}


//练习3：在一个有序数组中查找具体的某个数字n。 编写int binsearch(int x, int v[], int n); 功能：在v[0]<=v[1]<=v[2]<= ….<=v[n-1]的数组中查找x
//折半查找法（二分查找法）
int main()
{
    int x;
    scanf("%d",&x);
    int v[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(v)/sizeof(v[0]);
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]>x)
        {
            right=mid-1;
        }
        else if(v[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            printf("找到了,下标是%d\n",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("找不到\n");
    }
    return 0;
}

 //练习4：编写代码，演示多个字符从两端移动，向中间汇聚。

 int main()
 {
     char arr1[]="happy birthday to you!!!";
     char arr2[]="########################";
     int left=0;
     //int right=sizeof(arr1)/sizeof(arr1[0])-2;  //这种方法也可以，但是没有下面这种好，之所以-2，因为最后一个！后面还有一个'\0'
     int right=strlen(arr1)-1;
     while(left<=right)
     {
         arr2[left]=arr1[left];
         arr2[right]=arr1[right];
         left++;
         right--;
         printf("%s\n",arr2);
         Sleep(1000);  //休息一秒
         system("cls");  // 执行系统命令的一个函数 cls-->清空屏幕
     }
     printf("%s\n",arr2);
     return 0;
 }
*/

//练习5：. 编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则提示登录成，如果三次均输入错误，则退出程序）

int main()
{
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("请输入密码：\n");
        scanf("%s",password);
        if(strcmp(password,"123456")==0)  //==不能用来比较两个字符串是否相等，应使用一个库函数--strcmp
        {
            printf("登录成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if(i==3)
        printf("三次密码均错误，退出程序\n");
    return 0;
}
















