#include <stdio.h>
#include <stdlib.h>

/*
关系操作符
    >  >=  <  <=  !=  ==
    判断相等用==，判断不相等用!=
*/

/*
逻辑操作符
    &&  逻辑与
    ||  逻辑或

int main()
{
    int a=0;
    int b=5;
    int c=a&&b;
    int d=a||b;
    printf("%d\n",c);
    printf("%d\n",d);
    int i=0;int x=1;int y=2;int z=3;
    i=x++ && ++y && z++;    //逻辑或，左边为真后边就不计算了
    //i=x++ || ++y || z++;   //逻辑与，左边为假后边就不计算了
    printf("x=%d\n y=%d\n z=%d\n",x,y,z);
    return 0;
}
*/

/*
条件操作符（三目）
    表达式1 ? 表达式2 : 表达式3
    如果表达式1为真，则计算表达式2将其作为整个式子的结果
    如果表达式1为假，则计算表达式3将其作为整个式子的结果

int main()
{
    int a=10;
    int b=20;
    int max=0;
    //if(a>b)
    //    max=a;
    //else
    //    max=b;
    max=(a>b ? a : b);
    return 0;
}
*/

/*
逗号表达式
    表达式1，表达式2，表达式3，表达式4
    逗号表达式就是用逗号隔开的多个表达式
    逗号表达式，从左往右依次执行，整个表达式的结果是最后一个表达式的结果

int main()
{
    //伪代码
    a=get_val();
    count_val(a);
    while(a>0)
    {
        //业务处理
        a=get_val();
        count_val(a);
    }
    //改写成逗号表达式
    while(a=get_val(),count_val(a),a>0)
    {
        //业务处理
    }
    return 0;
}
*/

//下标引用、函数调用和结构成员
/*
1.[]下标引用操作符
    操作数：一个数组名+一个索引值

int main()
{
    int a[10]={0};
    a[4]=10; //[]的两操作数是a和4
    return 0;
}
*/

/*
2.()函数调用操作符
    接受一个或者多个操作数：第一个操作数是函数名，剩余的操作数就是传递给函数的参数

int get_max(int x,int y)
{
    return x>y?x:y;
}

int main()
{
    int a=10;
    int b=20;
    //调用函数的时候的()就是函数调用操作符
    int max=get_max(a,b);//操作数是get_max,a,b
    return 0;
}
*/

/*
3.访问一个结构的成员
    .   结构体.成员名
    ->  结构体指针->成员名
*/
//学生
//创建了一个结构体类型
struct Stu
{
    char name[20];
    int age;
    char id[20];
};

int main()
{
    int a=10;
    //用结构体类型创建了一个学生对象s1，并初始化
    struct Stu s1={"张三",20,"001"};
    printf("%s\n",s1.name);
    printf("%d\n",s1.age);
    printf("%s\n",s1.id);

    struct Stu* ps=&s1;
    printf("%s\n",(*ps).name);
    printf("%d\n",(*ps).age);
    printf("%s\n",(*ps).id);

    printf("%s\n",ps->name);
    printf("%d\n",ps->age);
    printf("%s\n",ps->id);
    //结构体变量.成员名
    return 0;
}






