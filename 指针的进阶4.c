#include <stdio.h>
#include <stdlib.h>

//指针的进阶4
/*
void menu()
{
    printf("**************   计算器   **************\n");
    printf("*******     1.Add      2.Sub     *******\n");
    printf("*******     3.Mul      4.Div     *******\n");
    printf("*******           0.Exit         *******\n");
    printf("****************************************\n");
}
int Add(int x,int y)
{
    return x+y;
}
int Sub(int x,int y)
{
    return x-y;
}
int Mul(int x,int y)
{
    return x*y;
}
int Div(int x,int y)
{
    return x/y;
}
void Calc(int (*pf)(int,int))//回调函数
{
    int x=0;
    int y=0;
    printf("请输入数字：\n");
    scanf("%d %d",&x,&y);
    printf("%d\n",pf(x,y));
}

int main()
{
    int input=0;
    do
    {
        menu();
        printf("请选择：\n");
        scanf("%d",&input);

        switch(input)
        {
        case 1:
            Calc(Add);
            break;
        case 2:
            Calc(Sub);
            break;
        case 3:
            Calc(Mul);
            break;
        case 4:
            Calc(Div);
            break;
        case 0:
            printf("退出计算器\n");
            break;
        default:
            printf("输入错误，请重新输入！\n");
            break;
        }
    }while(input);
}


//指向函数指针数组的指针
int main()
{
    int arr[10]={0};
    int (*p)[10]=&arr;//取出数组的地址

    int (*pfArr[4])(int,int);//pfArr是一个数组 - 函数指针的数组
    int (*(*ppfArr)[4])(int,int)=&pfArr;
    //ppfArr是一个指向[函数指针数组]的指针
    //ppfArr是一个数组指针，指针指向的数组有四个元素
    //指向的数组的每个元素的类型是一个函数指针 int(*)(int,int)

    return 0;
}
*/

//回调函数
void print(char *str)
{
    printf("%s\n",str);
}
void test(void (*p)(char*))
{
    printf("test\n");
    p("happy birthday!");
}
int main()
{
    test(print);
    return 0;
}











