#include <stdio.h>
#include <stdlib.h>

//�Ӵ�С��ӡ��λ����
int main()
{
    int a=0,b=0,c=0;
    printf("����������������");
    scanf("%d %d %d",&a,&b,&c);
    if(a<b)
    {
        int tmp=a;   //tmp���м����
        a=b;
        b=tmp;
    }
    if(a<c)
    {
        int tmp=a;
        a=c;
        c=tmp;
    }
    if(b<c)
    {
        int tmp=b;
        b=c;
        c=tmp;
    }
    printf("�����������Ӵ�С����Ϊ��%d %d %d\n",a,b,c);
    return 0;
}


//��ӡ1~100֮��3�ı�������
int main()
{
    int i=0;
    for(i=1;i<100;i++)
    {
        if(i%3==0)
            printf("%d\n",i);
    }
    return 0;
}


//�����Լ��
int main()
{
    int m=0;
    int n=0;
    int r=0;
    scanf("%d %d",&m,&n);
    while(m%n)  //m%n==0����Ϊ��ʱ��������ѭ��
    {
        r=m%n;
        m=n;      //շת�����
        n=r;
    }
    printf("%d\n",n);
    return 0;
}


//��ӡ����
int main()
{
    int year=0;
    int count=0;  //count��������������ֵĴ���
    for(year=2000;year<2022;year++)
    {
        //�ж�����ķ�����
        //1.�ܱ�4���������ܱ�100������
        //2.�ܱ�400������
        if(year%4==0 && year%100!=0)
        {
            printf("%d ",year);
            count++;
        }
        else if(year%400==0)
        {
            printf("%d ",year);
            count++;
        }
        //if(((year%4==0)&&(year%100!=0))||(year%400==0))    //�˴����ֱ�ʾ����������
        //{
        //    printf("%d ",year);
        //    count++;
        //}
    }
    printf("\n�ܹ�����%d������\n",count);
    return 0;
}


//��ӡ��100~200֮�������
int main()
{
    int i=0;
    int count=0;
    for(i=100;i<=200;i++)   //�ڶ�����ֱ���ų�����ż������i=100->i=101,i++->i+=2
    {
        //�ж�i�Ƿ�Ϊ����
        //�����ܶ࣬�˴������Գ���
        int j=0;
        for(j=2;j<i;j++)    //�˴��㷨�����Ż�,��һ����ʹ��sqrt��ƽ����ѧ�⺯������j<i�е�i�滻Ϊsqrt(i)
        {                                      //Ӧ��sqrt()��Ҫ���#include <math.h>
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j)                               //��i==j�滻��j>sqrt(i)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n�ܼ�%d������\n",count);
    return 0;
}


//��д������һ��1~100��������֮����ֶ��ٸ�����9
int main()
{
    int i=0;
    int count=0;
    for(i=1;i<=100;i++)
    {
        if(i%10==9)
            count++;
        if(i/10==9)
            count++;        //֮����д����if������Ϊ99��������������9��Ҫͳ�����Σ�����������if���ֿ�ͳ��
    }
    printf("�ܼƳ���%d������9\n",count);
    return 0;
}


//����1/1-1/2+1/3-1/4+...+1/99-1/100�Ľ������ӡ����
int main()
{
    int i=0;
    float sum=0;
    int flag=1;
    for(i=1;i<=100;i++)
    {
        sum+=flag*1.0/i;
        flag=-flag;
    }
    printf("������Ϊ��%lf\n",sum);
    return 0;
}


//��10�����м�������
int main()
{
    int arr[]={-40,12,34,-57,68,71,24,56,87,0};
    int max=arr[0];   //���ﲻ��max=0����Ϊ��������������ȫΪ�����Ļ�����������ӡ��0
    int i=0;
    int sz=sizeof(arr)/sizeof(arr[0]);   //�ճ���������Ԫ�ظ���
    for(i=0;i<sz;i++)
    {
        if(max<arr[i])
            max=arr[i];
    }
    printf("�������%d",max);
    return 0;
}


//��ӡһ��9x9�˷���
int main()
{
    int i=0;
    int j=0;
    printf("�žų˷���\n");
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%-2d ",i,j,i*j);
        }
        printf("\n");
    }
    return 0;
}



