#include <stdio.h>
#include <stdlib.h>

//�ж������ĺ�������Ϊ��������1����֮����0
int is_prime(int n)
{
    int j=0;
    for(j=2;j<n;j++)
    {
        if(n%j==0)
            return 0;  //return 0����ֱ�ӽ�������
    }
    return 1;

}

int main()
{
    int i=0;
    int count=0;
    for(i=100;i<=200;i++)
    {
        if(is_prime(i)==1)
        {
            printf("%d ",i);
            count++;
        }
    }
    printf("\n�ܼƣ�%d\n",count);
    return 0;
}


//�ж�����ĺ���
int is_leap(int n)
{
    if(((n%4==0)&&(n%100!=0))||(n%400==0))
        return 1;
    else
        return 0;
}

int main()
{
    int year=0;
    int count=0;
    for(year=2000;year<2022;year++)
    {
        if(is_leap(year)==1)
        {
            printf("%d ",year);
            count++;
        }
    }
    printf("\n�ܼƣ�%d\n",count);
    return 0;
}


//���ֲ��Һ���
int binary_search(int arr[],int k,int sz) //arr[]�����ﱾ������һ��ָ�룬���Բ����ں����ڲ��������������ĳ���
{                                         //��������������������sz��Ȼ���ٰ���������
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2; //�м�Ԫ���±�
        if(arr[mid]<k)
        {
            left=mid+1;
        }
        else if(arr[mid]>k)
        {
            right=mid-1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int k;
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(arr)/sizeof(arr[0]);
    printf("��������Ҫ���ҵ����֣�");
    scanf("%d",&k);
    int ret=binary_search(arr,k,sz);//�˴���arr���ݹ�ȥ����arr������Ԫ�صĵ�ַ�����������ں����ڲ��������鳤��
    //�ҵ��˷����±꣬û�ҵ�����-1
    if(ret==-1)
        printf("�Ҳ���ָ������\n");
    else
        printf("�ҵ��ˣ��±��ǣ�%d\n",ret);

    return 0;
}


//дһ��ÿ����һ�Σ�num�ͼ�һ�ĺ���
void ADD(int *p)
{
    (*p)++;  //����֮����Ҫ��*p������������Ϊ++�����ȼ���*Ҫ�ߣ�
}            //����Ϊ��ʵ��*p�ļ�һ������Ҫ������������

int main()
{
    int num=0;
    ADD(&num);
    printf("num=%d\n",num);
    ADD(&num);
    printf("num=%d\n",num);
    ADD(&num);
    printf("num=%d\n",num);
    return 0;
}

















