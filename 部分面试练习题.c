#include <stdio.h>
#include <stdlib.h>

//��������ϰ

/*
int main()
{
    int arr[]={1,2,3,4,5};  //int����ռ�ĸ��ֽ�
    short *p=(short*)arr;  //�����int����ǿ��ת����short���ͣ���short����ռ�����ֽ�
    int i=0;
    for(i=0;i<4;i++)  //ѭ���ĴΣ����β��ܰ�һ��int���͸ĳ�0
    {
        *(p+i)=0;
    }
    for(i=0;i<5;i++)
    {
        printf("%d ",arr[i]);  //�������0 0 3 4 5
    }
    return 0;
}
*/

/*
int main()
{
    int a=0x11223344;  //���ڴ��д�ŵ�a��ʵ�ǵ������� - 44 33 22 11
    char *pc=(char*)&a;  //ǿ��ת����char����ռһ���ֽ�
    *pc=0;  //�������44 33 22 11�е�44��д����00
    printf("%x\n",a);  //%x�Ƕ���16��������
    //�����ӡ��������11223300
    return 0;
}
*/

/*
int i;//��Ϊi��������һ��ȫ�ֱ�������ȫ�ֱ�������ʼ��ʱĬ��Ϊ0
int main()
{
    i--;
    if(i>sizeof(i))//sizeof�����������\������ռ�ڴ�Ĵ�С ��>=0 ������޷�����
    {                 //������i=-1��Ҫ��sizeof(i)=4���бȽϣ���Ҫ��-1ת�����޷�����
        printf(">\n"); // 10000000000000000000000000000001 - ԭ��
    }                  // 11111111111111111111111111111110 - ����
    else               // 11111111111111111111111111111111 - ����
    {                  //��-1ת�����޷�������ʱ�򣬴������λ��1���������ϵ������ˣ���ô���һ������Ȼ��4����
        printf("<\n");
    }
    return 0;
}
*/

/*
int main()
{
    int a,b,c;
    a = 5;
    c = ++a; //������+1�ٰ�ֵ����c - c=6 a=6
    b = ++c, c++, ++a, a++;  //��Ϊ���︳ֵ����'='�����ȼ�����','������Ҫ��b = ++c�������ű��ʽ��һ����
    // b=7 c=7 ->c=8 ->a=7 ->a=8 �ܵ�a=8 b=7 c=8
    b += a++ + c; //�������ȼ�++ > + > +=
    // a=9 b=25 c=8
    printf("a = %d b = %d c = %d\n",a,b,c);
    return 0;
}
*/

/*
//�ҳ�һ�����Ķ���������1�ĸ���
int Count(int a)
{
    int count=0;
    //int i=0;
    //for(i=0;i<32;i++)
    //{
    //    if(((a>>i)&1)==1)
    //    {
    //        count++;
    //    }
    //}

    while(a)
    {
        a=a&(a-1);
        count++;
    }
    //���Ч�㷨
    return count;
}

int main()
{
    int a=0;
    printf("���������֣�");
    scanf("%d",&a);
    int count=Count(a);
    printf("count = %d\n",count);
    return 0;
}
*/

/*
//�Ƚ�������m��n�Ķ��������ж���λ����ͬ
int get_diff(int m,int n)
{
    int tmp=m^n;
    int count=0;
    while(tmp)
    {
        tmp=tmp&(tmp-1);
        count++;
    }
    return count;
}

int main()
{
    int m=0;
    int n=0;
    scanf("%d %d",&m,&n);
    int count=get_diff(m,n);
    printf("��%dλ����ͬ\n",count);
    return 0;
}
*/
/*
//��ӡһ�����Ķ�������������λ��ż��λ
void print(int a)
{
    int i=0;
    printf("����λ��");
    for(i=30;i>=0;i-=2)
    {
        printf("%d ",(a>>i)&1);
    }
    printf("\n");
    printf("ż��λ��");
    for(i=31;i>=0;i-=2)
    {
        printf("%d ",(a>>i)&1);
    }
}

int main()
{
    int a=0;
    printf("���������֣�");
    scanf("%d",&a);
    print(a);
    return 0;
}
*/
/*
//�õݹ�ķ��������ַ����в���ӡ����
int my_strlen(char *arr)
{
    int count=0;
    while(*arr!='\0')
    {
        count++;
        arr++;
    }
    return count;
}

void reverse_string(char arr[])
{
    int tmp=arr[0];
    int len=my_strlen(arr);
    arr[0]=arr[len-1];
    arr[len-1]='\0';
    if(my_strlen(arr+1)>=2)
        reverse_string(arr+1);
    arr[len-1]=tmp;
}

int main()
{
    char arr[]="abcdef";
    reverse_string(arr);
    printf("%s\n",arr);
}
*/
/*
//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
int DigitSum(int a)
{
    if(a!=0)
        return a%10+DigitSum(a/10);
}

int main()
{
    int a=0;
    printf("���������֣�");
    scanf("%d",&a);
    int sum=DigitSum(a);
    printf("�������֮��Ϊ%d\n",sum);
    return 0;
}
*/

//��һ���ݹ麯������n��k�η�
double Pow(int n,int k)
{
    if(k>0)
        return n*Pow(n,k-1);
    else if(k<0)
        return (1.0/Pow(n,-k));
    else
        return 1;
}

int main()
{
    int n=0;
    int k=0;
    printf("������n��k��ֵ��");
    scanf("%d %d",&n,&k);
    double ret=Pow(n,k);
    printf("%d��%d�η�������Ϊ%lf\n",n,k,ret);
    return 0;
}












