#include <stdio.h>
#include <stdlib.h>

//ָ��Ľ���4
/*
void menu()
{
    printf("**************   ������   **************\n");
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
void Calc(int (*pf)(int,int))//�ص�����
{
    int x=0;
    int y=0;
    printf("���������֣�\n");
    scanf("%d %d",&x,&y);
    printf("%d\n",pf(x,y));
}

int main()
{
    int input=0;
    do
    {
        menu();
        printf("��ѡ��\n");
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
            printf("�˳�������\n");
            break;
        default:
            printf("����������������룡\n");
            break;
        }
    }while(input);
}


//ָ����ָ�������ָ��
int main()
{
    int arr[10]={0};
    int (*p)[10]=&arr;//ȡ������ĵ�ַ

    int (*pfArr[4])(int,int);//pfArr��һ������ - ����ָ�������
    int (*(*ppfArr)[4])(int,int)=&pfArr;
    //ppfArr��һ��ָ��[����ָ������]��ָ��
    //ppfArr��һ������ָ�룬ָ��ָ����������ĸ�Ԫ��
    //ָ��������ÿ��Ԫ�ص�������һ������ָ�� int(*)(int,int)

    return 0;
}
*/

//�ص�����
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











