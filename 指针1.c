#include <stdio.h>
#include <stdlib.h>

//ָ�����
//ָ���г��õĲ���������*��&��*�ǽ����ò���������ν�Ľ����ÿ������Ϊȡָ��ָ���ַ�����ݵġ�
/*
int main()
{
    int a=10;
    int* p=&a; //ָ����ʵ����һ�������������������ǵ�ַ
    //�����ָ���е�ֵ�������ɵ�ַ����
    return 0;
}
//ָ��Ĵ�С��32λƽ̨��4���ֽڣ���64λƽ̨��8���ֽ�
*/
/*
int main()
{
    printf("%d\n",sizeof(char*));
    printf("%d\n",sizeof(short*));
    printf("%d\n",sizeof(int*));
    printf("%d\n",sizeof(double*));
    //�����Ϊ4��������Ĭ��32λƽ̨
    return 0;
}
*/
/*
int main()
{
    int a=0x11223344;
    //int* pa=&a;
    //*pa=0;
    char* pa=&a;
    *pa=0;
    //char* pc=&a;
    //printf("%p\n",pa);
    //printf("%p\n",pc);
    return 0;
}
//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//int*p - *p�ܹ�����4���ֽ�
//char*p - *p�ܹ�����1���ֽ�
//double*p - *p�ܹ�����8���ֽ�


int main()
{
    int a=0x11223344;
    int* pa=&a;
    char* pc=&a;
    printf("%p\n",pa);
    printf("%p\n",pa+1);

    printf("%p\n",pc);
    printf("%p\n",pc+1);
    return 0;

}
//ָ�����;�������һ���߶�Զ��ָ��Ĳ�����
//int*p: p+1 --> 4
//char*p: p+1 --> 1
//double*p: p+1 --> 8


int main()
{
    int arr[10]={0};
    int* p=arr;//������-��Ԫ�ص�ַ
    int i=0;
    for(i=0;i<10;i++)
    {
        *(p+i)=1;
    }
    return 0;
}
//������int���͵�ָ�����ʵ�ְ�����arr�����Ԫ��ȫ������1
//�����char���͵Ļ����޷�ʵ����
*/

/*
//Ұָ�룺Ұָ�����ָ��ָ���λ���ǲ���֪�ģ�����ġ�����ȷ�ġ�û����ȷ���Ƶģ�
//����1��δ��ʼ��
int main()
{
    int a;//�ֲ���������ʼ����Ĭ�������ֵ
    int* p;//�ֲ���ָ��������ͱ���ʼ�����ֵ������Ϊ��Ұָ��
    *p=20;
    return 0;
}

//����2��ָ��Խ�����
int main()
{
    int arr[10]={0};
    int* p=arr;
    int i=0;
    for(i=0;i<12;i++)
    {
        p++;
    }
    //��ָ��ָ��ķ�Χ��������arr�ķ�Χʱ��p�ͳ�Ϊ��Ұָ��
    return 0;
}
*/
//����3��ָ��ָ��Ŀռ��ͷ�
int* test()
{
    int a=10;
    return &a;//��Ȼ&a�ܺõĴ���ȥ�ˣ����Ǻ���������a���ڵĿռ�ͱ��ͷ���
}

int main()
{
    int *p=test();
    *p=20;
    return 0;
}




