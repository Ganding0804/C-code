#include <stdio.h>
#include <stdlib.h>

//�ṹ��

//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�

//struct �ṹ��ؼ���  Stu - �ṹ���ǩ  struct Stu - �ṹ������

//struct  Stu
//{
//    //��Ա����
//    char name[20];
//    short age;     //����һ���ṹ������
//    char tele[12];
//    char sex[5];
//}s1,s2,s3;//s1,s2,s3������ȫ�ֱ���

/*
typedef struct Stu
{
    //��Ա����
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}Stu;//Stu�Ƕ�struct Stu��������
//�ṹ��ĳ�Ա�����ǲ�ͬ���͵ı���

int main()
{
    Stu s1={"����",20,"15612118636","��"};//�����ṹ���������ʼ�� - �����Ǿֲ�����
    Stu s2;
    return 0;
}
*/

/*
//�ṹ������ĳ�ʼ��
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
    struct S s;  //һ���ṹ��ĳ�Ա����Ҳ����������һ���ṹ�嶨�������
    char *pc;
};

int main()
{
    char arr[]="hello bit\n";
    struct T t={"hehe",{100,'w',"hello world",3.14},arr};//��������ʼ��
    printf("%s\n",t.ch);//hehe
    printf("%s\n",t.s.arr);//hello world
    printf("%lf\n",t.s.d);//3.14
    printf("%s\n",t.pc);//hello bit
    return 0;
}
*/

typedef struct Stu
{
    //��Ա����
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
    Stu s={"����",40,"15598886688","��"};
    Print1(s);
    printf("\n");
    Print2(&s);
    return 0;
}
//�������ε�ʱ���������Ҫѹջ�ġ��������һ���ṹ������ʱ�򣬽ṹ�����
//����ѹջ�ĵ�ϵͳ�����Ƚϴ����Իᵼ�������½�
//�������ϣ��ṹ�崫�ε�ʱ��Ҫ���ṹ��ĵ�ַ��















