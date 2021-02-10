#include <stdio.h>
#include <stdlib.h>

//结构体

//描述一个学生的一些数据
//姓名
//年龄
//电话
//性别

//struct 结构体关键字  Stu - 结构体标签  struct Stu - 结构体类型

//struct  Stu
//{
//    //成员变量
//    char name[20];
//    short age;     //定义一个结构体类型
//    char tele[12];
//    char sex[5];
//}s1,s2,s3;//s1,s2,s3是三个全局变量

/*
typedef struct Stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;//Stu是对struct Stu的重命名
//结构体的成员可以是不同类型的变量

int main()
{
    Stu s1={"张三",20,"15612118636","男"};//创建结构体变量并初始化 - 这里是局部变量
    Stu s2;
    return 0;
}
*/

/*
//结构体变量的初始化
struct S
{
    int a;
    char c;
    char arr[20];
    double d;
};

struct T
{
    char ch[10];
    struct S s;  //一个结构体的成员变量也可以是另外一个结构体定义的类型
    char *pc;
};

int main()
{
    char arr[]="hello bit\n";
    struct T t={"hehe",{100,'w',"hello world",3.14},arr};//创建并初始化
    printf("%s\n",t.ch);//hehe
    printf("%s\n",t.s.arr);//hello world
    printf("%lf\n",t.s.d);//3.14
    printf("%s\n",t.pc);//hello bit
    return 0;
}
*/

typedef struct Stu
{
    //成员变量
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;

void Print1(Stu tmp)
{
    printf("name: %s\n",tmp.name);
    printf("age:  %d\n",tmp.age);
    printf("tele: %s\n",tmp.tele);
    printf("sex:  %s\n",tmp.sex);
}

void Print2(Stu* ps)
{
    printf("name: %s\n",ps->name);
    printf("age:  %d\n",ps->age);
    printf("tele: %s\n",ps->tele);
    printf("sex:  %s\n",ps->sex);
}

int main()
{
    Stu s={"李四",40,"15598886688","男"};
    Print1(s);
    printf("\n");
    Print2(&s);
    return 0;
}
//函数传参的时候参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，
//参数压栈的的系统开销比较大，所以会导致性能下降
//所以综上，结构体传参的时候，要传结构体的地址。















