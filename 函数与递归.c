#include <stdio.h>
#include <stdlib.h>

//������ݹ�
//�ݹ����Ҫ˼�룺�Ѵ��»�С
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


//����һ������ֵ��Ȼ��һ�δ�ӡ����ÿһλ
int main()
{
    int unsigned num=0;
    scanf("%d",&num);  //����Ҫ��ӡ1234
    print(num);
    return 0;
}


//my_strlen("happy birthday to you!")
//1+my_strlen("appy birthday to you!")
//1+1+my_strlen("ppy birthday to you!")
//1+1+1+my_strlen("py birthday to you!")
//......
//1+1+1+...+my_strlen("")  ֻʣ��'\0'

int my_strlen(char* arr)
{
    if(*arr!='\0')
        return 1+my_strlen(arr+1);
    else
        return 0;
}

//��д��������������ʱ���������ַ�������
int main()
{
    char arr[]="happy birthday to you!";
    int len=my_strlen(arr);
    printf("�ַ�������Ϊ%d\n",len);
    return 0;
}


int Fac1(int n)  //ѭ��
{
    int i=0;
    int ret=1;
    for(i=1;i<=n;i++)
    {
        ret*=i;
    }
    return ret;
}

int Fac2(int n)  //�ݹ�
{
    if(n<=1)
        return 1;
    else
        return n*Fac2(n-1);

}

//�õݹ�ķ�����n�Ľ׳�
int main()
{
    int n=0;
    printf("������n��ֵ��");
    scanf("%d",&n);
    int ret1=Fac1(n);
    int ret2=Fac2(n);
    printf("%d�Ľ׳�ֵΪ%d\n",n,ret1); //ѭ��
    printf("%d�Ľ׳�ֵΪ%d\n",n,ret2); //�ݹ�
    return 0;
}
*/
/*
int count=0;
int Fib(int n)   //�ݹ��ȷ����������ȽϿ�ǰ��쳲�������������Խ��������Ч��Խ��
{                //�ܶ����ݶ����ظ�����
    if(n==3)     //���Ե�3��쳲��������������˶��ٴ�
    {
        count++;
    }
    if(n<=2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2);
}
*/

int Fib(int n)  //������ѭ����Ч�ʱȽϸ�
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

//��ӡ����n��쳲�������
//1,1,2,3,5,8,13,21,34,55...
int main()
{
    int n=0;
    int ret=0;
    printf("�����룻");
    scanf("%d",&n);
    ret=Fib(n);
    printf("��%d��쳲���������%d\n",n,ret);
    //printf("��3��쳲���������������%d��\n",count);
    return 0;
}










