#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


//������

void menu()
{
    printf("*******************************************\n");
    printf("************     ��������Ϸ    ************\n");
    printf("******     1.play         0.exit     ******\n");
    printf("*******************************************\n");
}

//��ʼ������
void InitBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            board[i][j]=' ';
        }
    }
}

//��ӡ����
//   |   |
//---|---|---
//   |   |
//---|---|---
//   |   |
void DisplayBoard(char board[ROW][COL],int row,int col)
{
    int i=0;
    for(i=0;i<row;i++)
    {
        //1.��ӡһ�е�����
        int j=0;
        for(j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        //2.��ӡ�ָ���
        if(i<row-1)
        {
            for(j=0;j<col;j++)
            {
                printf("---");
                if(j<col-1)
                    printf("|");
            }
            printf("\n");
        }
    }
}

//�������
void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("����ߣ�\n");
    while(1)
    {
        printf("������Ҫ�µ����꣺");
        scanf("%d %d",&x,&y);
        //�ж�x,y����Ϸ���
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='X';
                break;
            }
            else
            {
                printf("�����걻ռ��\n");
            }
        }
        else
        {
            printf("����Ƿ�������ϴ���룡\n");
        }
    }
}

//��������
void ComputerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("�����ߣ�\n");
    while(1)
    {
        x=rand()%row;
        y=rand()%col;
        if(board[x][y]==' ')
        {
            board[x][y]='O';
            break;
        }
    }
}

//����1��ʾ��������
//����0��ʾ����û��
int IsFull(char board[ROW][COL],int row,int col)
{
    int i=0;
    int j=0;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(board[i][j]==' ')
            {
                return 0;//û��
            }
        }
    }
    return 1;//����
}

//�ж���Ӯ
//���Ӯ - 'X'
//����Ӯ - 'O'
//ƽ��   - 'Q'
//����   - 'C'
char IsWin(char board[ROW][COL],int row,int col)
{
    int i=0;
    //��
    for(i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
        {
            return board[i][1];
        }
    }
    //��
    for(i=0;i<col;i++)
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]!=' ')
        {
            return board[1][i];
        }
    }
    //б
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
        return board[1][1];
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[1][1]!=' ')
        return board[1][1];
    //ƽ��
    if(IsFull(board,ROW,COL)==1)
    {
        return 'Q';
    }
    return 'C';
}

void game()
{
    char ret=0;
    //������������Ϣ
    char board[ROW][COL]={0};//ȫ����ӡ�ո�
    //��ʼ������
    InitBoard(board,ROW,COL);
    //��ӡ����
    DisplayBoard(board,ROW,COL);
    //����
    while(1)
    {
        //1.�������
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        //�ж�����Ƿ�Ӯ
        ret=IsWin(board,ROW,COL);
        if(ret!='C')
        {
            break;
        }
        //2.��������
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        //�жϵ����Ƿ�Ӯ
        ret=IsWin(board,ROW,COL);
        if(ret!='C')
        {
            break;
        }
    }
    if(ret=='X')
    {
        printf("���Ӯ\n");
    }
    else if(ret=='O')
    {
        printf("����Ӯ\n");
    }
    else
    {
        printf("ƽ��\n");
    }
}

void text()
{
    int input=0;
    srand((unsigned int) time(NULL));
    do
    {
        menu();
        printf("��ѡ��");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("������\n");
                game();
                break;
            case 0:
                printf("�˳���Ϸ\n");
                break;
            default:
                printf("�����������ϴ����\n");
                break;
        }
    }
    while(input);
}

int main()
{
    text();
    return 0;
}
