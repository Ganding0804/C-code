#include <stdio.h>
#include <stdlib.h>

//ָ��Ľ���
//�ַ�ָ��
/*
int main()
{
    char arr[] ="hello world!";
    char* pc = arr;
    printf("%s\n",arr);
    printf("%s\n",pc);
    return 0;
}

int main()
{
    const char* p = "abcdef";//��abcdef����һ�������ַ��������ﱾ�����ǰ���Ԫ�صĵ�ַ�Ž�ָ��
    *p = 'w'; //�δ��� - �ڴ���ʴ���  ��������д
    printf("%s\n",p);
    return 0;
}

int main()
{
    char arr1[]="abcdef";
    char arr2[]="abcdef";
    const char* p1="abcdef";
    const char* p2="abcdef";

    if(p1==p2)
    {
         printf("hehe\n"); //��ӡhehe
    }
    else
    {
        printf("haha\n");
    }

    //if(arr1==arr2)
    //{
    //    printf("hehe\n");
    //}
    //else
    //{
    //    printf("haha\n"); //��ӡhaha
    //}
    return 0;
}

int main()
{
    char str1[] = "hello bit.";
    char str2[] = "hello bit.";
    char *str3 = "hello bit.";
    char *str4 = "hello bit.";
    if(str1 ==str2)
        printf("str1 and str2 are same\n");
    else
        printf("str1 and str2 are not same\n");//��ȷ

    if(str3 ==str4)
        printf("str3 and str4 are same\n");//��ȷ
    else
        printf("str3 and str4 are not same\n");
    return 0;
}


//ָ������ - �������ָ�������
int main()
{
    int arr[10]={0};//��������
    char ch[5]={0};//�ַ�����
    int* parr[4];//�������ָ������� - ָ������
    char* pch[5];//����ַ�ָ������� - ָ������
    return 0
}

int main()
{
    int a=10;
    int b=20;
    int c=30;
    int d=40;
    int* arr[4]={&a,&b,&c,&d};
    int i=0;
    for(i=0;i<4;i++)
    {
        printf("%d ",*(arr[i]));
    }
    return 0;
}

int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={2,3,4,5,6};
    int arr3[]={3,4,5,6,7};

    int* parr[]={arr1,arr2,arr3};
    int i=0;
    for(i=0;i<3;i++)
    {
        int j=0;
        for(j=0;j<5;j++)
        {
            printf("%d ",*(parr[i]+j));
        }
        printf("\n");
    }
    return 0;
}
*/

//����ָ�� - ָ�������ָ��
int main()
{
    //int* p=NULL;//p������ָ�� - ָ�����ε�ָ�� - ���Դ�����εĵ�ַ
    //char* pc=NULL;//pc���ַ�ָ�� - ָ���ַ���ָ�� - ���Դ���ַ��ĵ�ַ

    //int arr[10]={0};
    //arr - ��Ԫ�ص�ַ
    //&arr[0] - ��Ԫ�ص�ַ
    //&arr - ����ĵ�ַ

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int (*p)[10]=&arr;//*pҪ��������ԭ����[]�����ȼ���*�ߣ�����ͳ���ָ��������
    //��������p��������ָ��
    return 0;
}










