#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[20]={0};
    //shutdown -s -t 60
    //system()-ִ��ϵͳ����
    system("shutdown -s -t 60");
again:
    printf("��ע�⣬��ĵ��Խ���60���ػ�\n������룺��������ȡ���ػ�\n�����룺");
    scanf("%s",arr);
    if(strcmp(arr,"������")==0) //�Ƚ������ַ�����strcmp()
    {
        system("shutdown -a");
    }
    else
    {
        printf("\n");
        printf("���Ǳ�����\n");
        printf("\n");
        goto again;
    }
    return 0;
}
