#include <stdio.h>
#include <stdlib.h>
/*
//ð������
void bubble_sort(int arr[],int sz)
{
    //ȷ��ð�����������
    int i=0;
    int flag=1;
    for(i=0;i<sz-1;i++)
    {
        //ÿһ��ð������
        int j=0;
        for(j=0;j<sz-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;
            }
            if(flag==1)
                break;
        }
    }
}
//����
int main()
{
    int arr[]={10,9,8,7,6,5,4,3,2,1};
    int sz=sizeof(arr)/sizeof(arr[0]);
    printf("��С����:");
    bubble_sort(arr,sz);
    int i=0;
    //������ӡ����������
    for(i=0;i<10;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
*/
//���鴫�ε�ʱ�򣬴��ݹ�ȥ����������Ԫ�صĵ�ַ�����������⣩
//1.sizeof(������)��������������Ĵ�С��sizeof�ڲ�������һ������������ʾ��������
//2.&��������ȡ����������ĵ�ַ��&�������������ʾ������

int main()
{
    int arr[10]={1,2,3,4};
    //1.
    printf("%d\n",sizeof(arr));
    //2.
    printf("%d\n",*arr);
    printf("%p\n",arr);
    printf("%p\n",arr+1);
    printf("%p\n",&arr[0]);
    printf("%p\n",&arr[0]+1);
    printf("%p\n",&arr);
    printf("%p\n",&arr+1);
    //��һ֮��Ƚϵ�ַ������&arr�Ǳ�ʾ��������
    return 0;
}







