#include <stdio.h>
#include <stdlib.h>

//ָ������
//1.ָ��Ӽ�����
/*
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int* p=&arr[9];
    int i=0;
    //for(i=0;i<sz;i++)
    //{
    //   printf("%d\n",*p);
    //    p++;
    //}
    for(i=0;i<5;i++)
    {
        printf("%d\n",*p);
        p-=2;
    }
    return 0;
}
*/

/*
//2.ָ���ȥָ�루ָ��ͬһ�ռ䣬����ͬһ�����飩
int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    printf("%d\n",&arr[9]-&arr[0]);//�õ��Ľ����ʵ��ָ���ָ���м��Ԫ�ظ��������С��
    return 0;
}

int my_strlen(char* str)
{
    char* start=str;
    char* end=str;
    while(*end!='\0')
    {
        end++;
    }
    return end-start;
}

int main()
{
    //strlen - ���ַ�������
    //ģ��ʵ��strlen,֮ǰ�Ѿ�չʾ�����ַ�������������ʽ�͵ݹ鷽ʽ
    char arr[]="happy birthday!";
    int len =my_strlen(arr);
    printf("%d\n",len);
    return 0;
}


//ָ��Ĺ�ϵ���㣨�Ƚϴ�С��
#define N 5
int main()
{
    int values[N];
    int* vp;
    for(vp=&values[N];vp>&values[0];)
    {
        *--vp=0;
    }

    //for(vp=&values[N];vp>&values[0];vp--)
    //{
    //    *vp=0;
    //}
    //�����ַ���ʵ�����ھ�������ı����������ǿ���˳���������ģ������������дǰ�����֡�
    //C���Եı�׼�涨������ָ������Ԫ�ص�ָ����ָ���������һ��Ԫ�غ�����Ǹ��ڴ�λ�õ�ָ��Ƚϣ�
    //���ǲ�������ָ���һ��Ԫ��֮ǰ���Ǹ��ڴ�λ�õ�ָ����бȽϡ�
    return 0;
}
*/
/*
//ָ�������
int main()
{
    int arr[10]={0};
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    return 0;
}

int main()
{
    int arr[10]={0};
    int* p=arr;
    int i=0;
    for(i=0;i<10;i++)
    {
        printf("%p  =====  %p\n",p+i,&arr[i]);
    }
    return 0;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int *p=arr;
    int sz=sizeof(arr)/sizeof(arr[0]);
    int i=0;
    for(i=0;i<sz;i++)
    {
        printf("%d ",*(p+i));
    }
    return 0;
}
//�������ͨ��ָ�����ܺõķ���


//����ָ��
int main()
{
    int a=10;
    int * pa=&a;
    int * *ppa=&pa;//ppa���Ƕ���ָ��
    //int ***pppa=&ppa
    printf("%d\n",**ppa);
    return 0;
}
*/

//ָ������ - ���� - ���ָ�������
//����ָ�� - ָ�� -

int main()
{
    int a=10;
    int b=20;
    int c=30;
    int* pa=&a;
    int* pb=&b;
    int* pc=&c;
    //�������� - �������
    //�ַ����� - ����ַ�
    //ָ������ - ���ָ��
    int* arr[3]={&a,&b,&c};//ָ������
    int i=0;
    for(i=0;i<3;i++)
    {
        printf("%d ",*(arr[i]));
    }
    return 0;
}

