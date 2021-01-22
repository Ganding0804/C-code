#include <stdio.h>
#include <stdlib.h>

//常量与变量
int main()
{
    int n;//n是一个变量，即可以改变的量

    n = 1;//此处将常量1赋给变量n   注：常量无法被改变  eg：1 = 3 很明显是不成立的，也不可能成功的

    scanf("%d",&n);//此处是将键盘输入的常量赋给变量n    注：%d对于int定义的整形变量，%d-->int，&是必须要加的，作用是取变量n的地址

    printf("%d\n",n);//此处\n是换行的意思，printf里面不需要用到&，注意和scanf区分

    return 0;
}

//const修饰的常变量
int main()
{
    const int n = 1;//此处的n是常变量，n本质上是变量，但是在const的修饰之下拥有了常量的属性，所以称之为常变量
                    //注：此处的常变量n不可用于数组 eg：arr[n] 这样是错误的，方括号里面不能是变量，常变量n本质上还是变量
    4;//此处的4是字面常量
    printf("%d\n",n);
    return 0;
}

//#define定义的标识符常量
#define N 10
//此处将N定义为一个常量，值为10
int main()
{
    int arr[N]={0};//此处N为常量所以可以使用，而且N不可以被改变
    return 0;
}

//枚举常量
//eg：性别：男，女，保密     三原色：红，黄，蓝

enum Sex  //enum是枚举常量的意思，注意这里花括号后面要有；，而且枚举的每个常量之间要用，隔开
{           //每一个枚举常量都是有对应的值得，无法更改
    BOY,//对应值为0
    GIRL,//对应值为1
    SECRET//对应值为2
};

int main()
{
    enum Sex s = BOY;
    return 0;
}



















