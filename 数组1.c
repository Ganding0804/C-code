#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//����

//һά����
/*
int main()
{
    int arr1[10]={1,2,3}; //����ȫ��ʼ����ʮ���ֽ�ֻ��ʼ�����ĸ�������'\0'
    int arr2[]={1,2,3,4};
    int arr3[5]={1,2,3,4,5};
    char arr4[3]={'a',98,'c'}; //��Ϊ�������ַ����ͣ�98�ͻᰴ��ASCII��ת��Ϊ��Ӧ���ַ�'b'
    char arr5[]={'a','b','c'};
    char arr6[]="abcdef";
    return 0;
}
*/
/*
int main()
{
    char arr[]="abcdef";
    printf("%d\n",sizeof(arr));
    //sizeof����arr��ռ�ռ�Ĵ�С������'\0'
    printf("%d\n",strlen(arr));
    //strlen���ַ����ĳ��ȣ���'\0'֮ǰ���ַ�����
    return 0;
}

//1.strlen��sizeofû��ʲô����
//2.strlen�����ַ�������--ֻ������ַ�������--�ǿ⺯����ʹ�õ���ͷ�ļ�#include <string.h>
//3.sizeof�������ڼ�����������顢���͵Ĵ�С--��λ���ֽ�--�ǲ�����


int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};  //һά�������ڴ�����������ŵ�
    int i;
    int sz=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<sz;i++)
    {
        printf("&arr[%d]=%p\n",i,&arr[i]);  //������&arr[i]��ȡ��ַ--��Ӧ%p
    return 0;
}


//��ά����
int main()
{
    //��ά����ô����ͳ�ʼ��
    int arr1[3][4]={1,2,3,4};
    int arr2[3][4]={{1,2},{4,5}};  //�ô��������������԰�Ԫ�ط��䵽��ͬ��������ȥ
    int arr3[][4]={{2,3},{4,5}};   //��ά�����ʼ�� �п���ʡ��
    return 0;
}
*/

//��ά�������
int main()
{
    int arr[3][4]={{1,2},{3,4,5},{6,7,8,9}};
    int i=0;
    for(i=0;i<3;i++)
    {
        int j;
        for(j=0;j<4;j++)
        {
            printf("%d %p  ",arr[i][j],&arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
//ͨ�����н�����ѷ��֣���ʵ��ά�������ڴ���Ҳ��������ŵ�

















