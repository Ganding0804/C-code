#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

//��֧���
/*
//if���
int main()
{
   int age = 0;
   scanf("%d",&age);
   if(age<18)
   {
       printf("δ����\n");
   }
   else if(age>=18 && age<30)
   {
       printf("����\n");
   }
   else if(age>=30 && age<50)
   {
       printf("׳��\n");
   }
   else if(age>=50 && age<100)
   {
       printf("����\n");
   }
   else
   {
       printf("�ϲ���\n");
   }
    return 0;
}
//if�����else��ƥ�����⣬����ж��if��else������û�б�����������������ôelse��ƥ������������Ǹ�if���м�


//switch���
int main()
{
    int day = 0;
    scanf("%d",&day);
    switch(day)  //switch�������������棬���������ͳ������ʽ
    {
    case 1:
        printf("����һ\n");
        break;  //break������������switch���
    case 2:
        printf("���ڶ�\n");
        break;
    case 3:
        printf("������\n");
        break;
    case 4:
        printf("������\n");
        break;
    case 5:
        printf("������\n");
        break;
    case 6:
        printf("������\n");
        break;
    case 7:
        printf("������\n");
        break;
    default:  //default�Ӿ��ǵ�switch���ʽ��ֵ����ƥ������case��ǩ��ֵʱ���Ż�ִ��
        printf("�������");  //ÿ��switch�����ֻ�ܳ���һ��default�Ӿ䣬��λ�ÿ�����case��ǩ�����ڵ�����һ��λ��
        break;
    }
    return 0;
}


//ѭ�����

//while���
int main()
{
    int i = 0;
    while(i<=10)
    {
        i++;
        if(i == 5)
            continue;  //continue��������ֹ����ѭ���ģ�������ѭ������Ĵ��벻����ִ�У�����ֱ����ת����һ��ѭ��
        printf("%d \n",i);
        if(i == 8)
            break;  //break������������ֹѭ����
    }
    return 0;
}

int main()
{
    int ch;
    int password[20] = {0};
    printf("���������룺");
    scanf("%s",&password);
    if((ch=getchar())=='Y')
    {
        printf("ȷ������");
    }
    else
        printf("����ȷ��");
    return 0;
}*/
/*��д��γ����ԭ�������о�һ��getchar()����codeblocks������γ������ܹ����гɹ��ģ�
  ���������VS����д�Ļ����п��ܳ��ִ���ԭ��������������֮�󣬻س�֮������˼��ת���ַ�'\n'��
  �ᱻ��¼�����뻺�����ڣ��Ӷ�ֱ�ӱ�getchar()���ߡ������Խ�getchar()��������ݴ�ӡ������������10����10��ӦASCII����е�'\n'��
  ��Ҫ���������⣬������scanf��һ��д���룬Ŀ���ǰ����뻺������գ���������
  while((ch=getchar())!='\n')
  {
      ;
  }
  �����Ϳ��Խ��������

*/

//forѭ����䣨ʹ����㷺��ѭ����䣩
/*
int main()
{
    int i=0;
    for(i=1;i<11;i++)  //for�������ı��ʽ��ʱ���ǿ���ʡ�Եģ���������֮ǰ��Ҫʡ��
    {
        printf("%d \n",i);   //break��continueҲ��������������ʹ��
    }
    return 0;
}*/
/*ע�⣺1.������forѭ�������޸�ѭ����������ֹforѭ��ʧȥ���ơ�
        2.����for����ѭ�����Ʊ�����ȡֵ���á�ǰ�պ����䡱д����
          eg��i<=10 --> i<11
*/

//do...while()ѭ�����
/*
int main()
{
    int i=0;
    do
    {
        printf("%d \n",i);
        i++;
    }
    while(i<11);
    return 0;
}
*/
//do...whileѭ���������ѭ��һ�Σ������䲻���á�

//��ϰ1:ʵ��n�Ľ׳�
/*
int main()
{
    int i=0,n=0;
    int z=1;
    printf("������n��nΪ����������");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z=z*i;
    }
    printf("%d\n",z);
    return 0;
}


//��ϰ2:����1!+2!+3!+...+n!

int main()
{
    int i=0,n=0;
    int z=1,sum=0;
    printf("������n��nΪ����������");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        z*=i;
        sum+=z;
    }
    printf("%d\n",sum);
    return 0;
}


//��ϰ3����һ�����������в��Ҿ����ĳ������n�� ��дint binsearch(int x, int v[], int n); ���ܣ���v[0]<=v[1]<=v[2]<= ��.<=v[n-1]�������в���x
//�۰���ҷ������ֲ��ҷ���
int main()
{
    int x;
    scanf("%d",&x);
    int v[10]={1,2,3,4,5,6,7,8,9,10};
    int sz=sizeof(v)/sizeof(v[0]);
    int left=0;
    int right=sz-1;
    while(left<=right)
    {
        int mid=(left+right)/2;
        if(v[mid]>x)
        {
            right=mid-1;
        }
        else if(v[mid]<x)
        {
            left=mid+1;
        }
        else
        {
            printf("�ҵ���,�±���%d\n",mid);
            break;
        }
    }
    if(left>right)
    {
        printf("�Ҳ���\n");
    }
    return 0;
}

 //��ϰ4����д���룬��ʾ����ַ��������ƶ������м��ۡ�

 int main()
 {
     char arr1[]="happy birthday to you!!!";
     char arr2[]="########################";
     int left=0;
     //int right=sizeof(arr1)/sizeof(arr1[0])-2;  //���ַ���Ҳ���ԣ�����û���������ֺã�֮����-2����Ϊ���һ�������滹��һ��'\0'
     int right=strlen(arr1)-1;
     while(left<=right)
     {
         arr2[left]=arr1[left];
         arr2[right]=arr1[right];
         left++;
         right--;
         printf("%s\n",arr2);
         Sleep(1000);  //��Ϣһ��
         system("cls");  // ִ��ϵͳ�����һ������ cls-->�����Ļ
     }
     printf("%s\n",arr2);
     return 0;
 }
*/

//��ϰ5��. ��д����ʵ�֣�ģ���û���¼�龰������ֻ�ܵ�¼���Ρ���ֻ���������������룬���������ȷ����ʾ��¼�ɣ�������ξ�����������˳�����

int main()
{
    int i=0;
    char password[20]={0};
    for(i=0;i<3;i++)
    {
        printf("���������룺\n");
        scanf("%s",password);
        if(strcmp(password,"123456")==0)  //==���������Ƚ������ַ����Ƿ���ȣ�Ӧʹ��һ���⺯��--strcmp
        {
            printf("��¼�ɹ�\n");
            break;
        }
        else
        {
            printf("�������\n");
        }
    }
    if(i==3)
        printf("��������������˳�����\n");
    return 0;
}
















