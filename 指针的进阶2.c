#include <stdio.h>
#include <stdlib.h>

//ָ��Ľ���2
//���������ָ�����
/*
//һά���鴫��
void test(int arr[])//ok
{}
void test(int arr[10])//ok []����д��д��ȫ��Ӱ��
{}
void test(int *arr)//ok
{}
void test2(int *arr[20])//ok
{}
void test2(int **arr)//ok
{}
int main()
{
     int arr[10] = {0};
     int *arr2[20] = {0};
     test(arr);
     test2(arr2);
}

//��ά���鴫��
void test(int arr[3][5])//ok
{}
void test(int arr[][])//NO
{}
void test(int arr[][5])//ok
{}
//�ܽ᣺��ά���鴫�Σ������βε����ֻ��ʡ�Ե�һ��[]�����֡�
//��Ϊ��һ����ά���飬���Բ�֪���ж����У����Ǳ���֪��һ�ж���Ԫ�ء�
//�����ŷ������㡣
void test(int *arr)//NO
{}
void test(int* arr[5])//NO
{}
void test(int (*arr)[5])//ok
{}
void test(int **arr)//NO
{}
int main()
{
    int arr[3][5] = {0};
    test(arr);
}

//һ��ָ�봫��
void print(int *p, int sz)
{
     int i = 0;
     for(i=0; i<sz; i++)
     {
     printf("%d\n", *(p+i));
     }
}
int main()
{
     int arr[10] = {1,2,3,4,5,6,7,8,9};
     int *p = arr;
     int sz = sizeof(arr)/sizeof(arr[0]);
     //һ��ָ��p����������
     print(p, sz);
     return 0;
}
//�������Ĳ�������Ϊһ��ָ���ʱ�򣬺����ܽ���һ��ָ��͵�ַ
void test1(int* p)
{

}
void test2(char* p)
{

}
int main()
{
    int a=10;
    int* p1=&a;
    test1(&a);
    test1(p1);

    char ch='w';
    char* pc=&ch;
    test2(&ch);
    test2(pc);
    return 0;
}

//����ָ�봫��
void test(int** ptr)
{
    printf("num = %d\n", **ptr);
}
int main()
{
     int n = 10;
     int*p = &n;
     int **pp = &p;
     test(pp);
     test(&p);
     return 0;
}
//�������Ĳ���Ϊ����ָ���ʱ�򣬿��Խ��ն���ָ�룬һ��ָ���ַ������ָ��
*/
void test(char **p)
{

}
int main()
{
     char c = 'b';
     char*pc = &c;
     char**ppc = &pc;
     char* arr[10];
     test(&pc);
     test(ppc);
     test(arr);//Ok
     return 0;
}










