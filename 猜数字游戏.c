#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//��������Ϸ
void menu()
{
    printf("*****************************************\n");
    printf("***********    ��������Ϸ    ************\n");
    printf("*****      1.play       0.exit      *****\n");
    printf("*****************************************\n");
}

void game()
{
    //1.����һ�������
    int ret=0;
    int guess=0;
    ret = rand()%100+1; //����1~100֮������������Ϊrand()��������������ķ�Χ��[0,RAND_MAX]��Ϊ[0,32767],���ԲŻ�������ֱ��ʽ��
    //2.������
    printf("�뿪ʼ�����֣�\n");
    while(1)
    {

        scanf("%d",&guess);
        if(guess<ret)
        {
            printf("��С��\n");
        }
        else if(guess>ret)
        {
            printf("�´���\n");
        }
        else
        {
            printf("��ϲ�㣬�¶��ˣ�\n");
            printf("\n");
            break;
        }
    }
}

int main()
{
    int input=0;
    //��ʱ����������������������ʼ��
    //void srand(unsign int seed); ��������Ҫһ�����ͱ���
    //ʱ����ǵ�ǰ�������ʱ��-���������ʼʱ�䣨1970.1.1.0:0:0��=(xxxxx)��
    //��Ҫ���ʱ�����Ҫtime()����
    //time_t time(time_t *timer); time_t��������һ�������ͣ�ֻ����������������
    srand((unsigned int)time(NULL)); //���������ǿ��ת��long->int
    do
    {
        menu();
        printf("��ѡ��");
        scanf("%d",&input);

        switch(input)
        {
            case 1:
                game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                printf("\n");
                break;
            default:
                printf("ѡ�����\n");
                printf("\n");

        }
    }while(input);
    return 0;
}
