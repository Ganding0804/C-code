#include <stdio.h>
#include <stdlib.h>

//������̨������
//һֻ����һ�ο�������1��̨�ף�Ҳ��������2���������������һ��n����̨���ܹ��ж�����������

//   n-> 1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10 ...
// sum-> 1 , 2 , 3 , 5 , 8 , 13, 21, 34, 55, 89 ...
//���ѷ���������쳲��������У�f(n)=f(n-1)+f(n-2)

int jump1(int n)   //�ݹ�
{
    if(n<=3)
        return n;
    else
        return jump1(n-1)+jump1(n-2);
}

int jump2(int n)   //�ǵݹ�
{
    int a=1;
    int b=2;
    int c=3;
    if(n<=2)
        return n;
    while(n>2)
    {
        c=a+b;
        a=b;
        b=c;
        n--;
    }
    return c;
}

int main()
{
    int n=0;
    int ret1=0;
    int ret2=0;
    printf("������̨������");
    scanf("%d",&n);
    ret1=jump1(n);
    ret2=jump2(n);
    printf("�ܹ���%d������\n",ret1);
    printf("�ܹ���%d������\n",ret2);
    return 0;
}

//ģ�´�ӡ쳲��������е�������У����÷ǵݹ鷽ʽЧ�ʱȽϸ�
