#include <stdio.h>
#include <stdlib.h>

//���ݵĴ洢
//�������͵����壺
//    1.ʹ��������Ϳ����ڴ�ռ�Ĵ�С����С������ʹ�÷�Χ��
//    2.��ο����ڴ�ռ���ӽ�

//��˴洢��С�˴洢
//��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ��
//С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ���������ڴ�ĸߵ�ַ��
/*
//дһ�δ�����Ե�ǰ�����Ĵ洢ģʽ
int check_sys()
{
    int a=1;
    char *p=(char*)&a;
    if(*p==1)
        return 1;
    else
        return 0;
    //����ֱ��return *p;
    //���д��return *(char*)&a;
}

int main()
{
    //����1��С��
    //����0�����
    int ret=check_sys();
    if(ret==1)
        printf("С��\n");
    else
        printf("���\n");
    return 0;
}
*/

//��ϰ
//���ʲô��
/*
int main()
{
    char a= -1;//-1
    signed char b=-1;//-1
    unsigned char c=-1;//255
    printf("a=%d,b=%d,c=%d",a,b,c);
    return 0;
}
//��������

int main()
{
    char a = -128; //�з���char�ķ�Χ��-128~127���޷���char�ķ�Χ��0~255
    printf("%u\n",a);
    //%d - ��ӡʮ�����з�������
    //%u - ��ӡʮ�����޷�������
    return 0;
}

int main()
{
    char a = 128;//����Ϊ127+1���൱��-128
    printf("%u\n",a);
    return 0;
}

#include <windows.h>
int main()
{
    unsigned int i;
    for(i=9;i>=0;i--)
    {
        printf("%u\n",i);
        Sleep(100);
    }
    return 0;
}

#include <string.h>
int main()
{
    char a[1000];
    int i;
    for(i=0; i<1000; i++)
   {
        a[i] = -1-i;
   }
    printf("%d",strlen(a));//strlenҪ��'\0'
    return 0;
}


unsigned char i = 0;
int main()
{
    for(i = 0;i<=255;i++)
   {
        printf("hello world\n");
   }
    return 0;
}
*/

//���������ڴ��еĴ洢
//����һ�������Ƹ�����V���Ա�ʾ���������ʽ��(-1)^S*M*2^E
//(-1)^S��ʾ����λ����S=0��VΪ��������S=1��VΪ����
//M��ʾ��Ч���֣����ڵ���1С��2
//2^E��ʾָ��λ  E�Ĵ洢Ҫ��һ���м�����32λ��127,64λ��1023
int main()
{
    int n = 9;
    //0 00000000 00000000000000000001001 - ����
    float *pFloat = (float *)&n;
    printf("n��ֵΪ��%d\n",n); //9
    printf("*pFloat��ֵΪ��%f\n",*pFloat); //0.000000
    //(-1)^0 * 0.0000000000000000001001 * 2^-126
    //����������0
    *pFloat = 9.0;
    //1001.0
    //(-1)^0 * 1.001 * 2^3
    //01000001000100000000000000000000
    printf("num��ֵΪ��%d\n",n);//1091567616
    printf("*pFloat��ֵΪ��%f\n",*pFloat);//9.00000
    return 0;
}
//�������Ĵ洢��ʽ��ȡ����ʽ����������ͬ�����ԲŻ�����Щ���




















