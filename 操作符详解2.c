#include <stdio.h>
#include <stdlib.h>

/*
��ϵ������
    >  >=  <  <=  !=  ==
    �ж������==���жϲ������!=
*/

/*
�߼�������
    &&  �߼���
    ||  �߼���

int main()
{
    int a=0;
    int b=5;
    int c=a&&b;
    int d=a||b;
    printf("%d\n",c);
    printf("%d\n",d);
    int i=0;int x=1;int y=2;int z=3;
    i=x++ && ++y && z++;    //�߼������Ϊ���߾Ͳ�������
    //i=x++ || ++y || z++;   //�߼��룬���Ϊ�ٺ�߾Ͳ�������
    printf("x=%d\n y=%d\n z=%d\n",x,y,z);
    return 0;
}
*/

/*
��������������Ŀ��
    ���ʽ1 ? ���ʽ2 : ���ʽ3
    ������ʽ1Ϊ�棬�������ʽ2������Ϊ����ʽ�ӵĽ��
    ������ʽ1Ϊ�٣��������ʽ3������Ϊ����ʽ�ӵĽ��

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
���ű��ʽ
    ���ʽ1�����ʽ2�����ʽ3�����ʽ4
    ���ű��ʽ�����ö��Ÿ����Ķ�����ʽ
    ���ű��ʽ��������������ִ�У��������ʽ�Ľ�������һ�����ʽ�Ľ��

int main()
{
    //α����
    a=get_val();
    count_val(a);
    while(a>0)
    {
        //ҵ����
        a=get_val();
        count_val(a);
    }
    //��д�ɶ��ű��ʽ
    while(a=get_val(),count_val(a),a>0)
    {
        //ҵ����
    }
    return 0;
}
*/

//�±����á��������úͽṹ��Ա
/*
1.[]�±����ò�����
    ��������һ��������+һ������ֵ

int main()
{
    int a[10]={0};
    a[4]=10; //[]������������a��4
    return 0;
}
*/

/*
2.()�������ò�����
    ����һ�����߶������������һ���������Ǻ�������ʣ��Ĳ��������Ǵ��ݸ������Ĳ���

int get_max(int x,int y)
{
    return x>y?x:y;
}

int main()
{
    int a=10;
    int b=20;
    //���ú�����ʱ���()���Ǻ������ò�����
    int max=get_max(a,b);//��������get_max,a,b
    return 0;
}
*/

/*
3.����һ���ṹ�ĳ�Ա
    .   �ṹ��.��Ա��
    ->  �ṹ��ָ��->��Ա��
*/
//ѧ��
//������һ���ṹ������
struct Stu
{
    char name[20];
    int age;
    char id[20];
};

int main()
{
    int a=10;
    //�ýṹ�����ʹ�����һ��ѧ������s1������ʼ��
    struct Stu s1={"����",20,"001"};
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
    //�ṹ�����.��Ա��
    return 0;
}






