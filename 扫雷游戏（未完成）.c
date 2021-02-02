#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 5

//ɨ����Ϸ

//�˵�
void menu()
{
    printf("*******************************************\n");
    printf("*******           ɨ����Ϸ           ******\n");
    printf("*******      1.play      0.exit      ******\n");
    printf("*******************************************\n");
}

//��ʼ��
void InitBoard(char board[ROWS][COLS],int rows,int cols,char set)
{
    int i=0;
    int j=0;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            board[i][j]=set;
        }
    }
}

//��ӡ
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    int i=0;
    int j=0;
    //��ӡ�к�
    for(i=0;i<=col;i++)
    {
        printf("%d ",i);
    }
    printf("\n");
    for(i=1;i<=row;i++)
    {
        printf("%d ",i);
        for(j=1;j<=col;j++)
        {
            printf("%c ",board[i][j]);
        }
        printf("\n");
    }
}

//������
void SetMine(char board[ROWS][COLS],int row,int col)
{
    int count=EASY_COUNT;
    while(count)
    {
        int x=rand()%row+1;  //1~9
        int y=rand()%col+1;
        if(board[x][y]=='0')
        {
            board[x][y]='1';
            count--;
        }
    }
}

//������x,y������Χ�м�����
//'1'-'0'=1
int win=0;
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{

    return mine[x-1][y-1]+mine[x-1][y]+mine[x-1][y+1]+
           mine[x][y-1]+mine[x][y+1]+
           mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]-8*'0';
}

//����Χû���׵�ʱ�����չ��
void Spread(char mine[ROWS][COLS],char show[ROWS][COLS],int x,int y)
{
    int count=get_mine_count(mine,x,y);
    if(count==0)
    {
        show[x][y]=' ';
        if ((x-1)>0 && (y-1)>0 && (show[x-1][y-1] == '*'))
			Spread(mine, show, x - 1, y - 1);

		if ((x - 1)>0 && (y)>0 && (show[x - 1][y] == '*'))
			Spread(mine, show, x - 1, y);

		if ((x - 1)>0 && (y + 1)>0 && (show[x - 1][y + 1] == '*'))
			Spread(mine, show, x - 1, y + 1);

		if ((x)>0 && (y - 1)>0 && (show[x][y - 1] == '*'))
			Spread(mine, show, x, y - 1);

		if ((x)>0 && (y + 1)>0 && (show[x][y + 1] == '*'))
			Spread(mine, show, x, y + 1);

		if ((x + 1)>0 && (y - 1)>0 && (show[x + 1][y - 1] == '*'))
			Spread(mine, show, x + 1, y - 1);

		if ((x + 1)>0 && (y)>0 && (show[x + 1][y] == '*'))
			Spread(mine, show, x + 1, y);

		if ((x + 1)>0 && (y + 1)>0 && (show[x + 1][y + 1] == '*'))
			Spread(mine, show, x + 1, y + 1);
        win++;
    }
    else
    {
        show[x][y]=count+'0';
        win++;
    }

}

//����
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;

    //�ж�����Ϸ���
    while(win<row*col-EASY_COUNT)
    {
        printf("�������Ų��׵����꣺");
        scanf("%d %d",&x,&y);
        if(x>=1 && x<=row && y>=1 &&y<=col)
        {
            //����Ϸ�
            //1.����
            if(mine[x][y]=='1')
            {
                printf("���ź����������\n");
                DisplayBoard(mine,row,col);
                break;
            }
            else  //2.������
            {
                //������x,y������Χ�м�����
                Spread(mine,show,x,y);

                DisplayBoard(show,row,col);
            }
        }
        else
        {
            printf("��������Ƿ������������룡\n");
        }
    }
    if(win==row*col-EASY_COUNT)
    {
        printf("��ϲ�㣬���׳ɹ���\n");
        DisplayBoard(mine,row,col);
    }
}

void game()
{
    //�׵���Ϣ�洢
    //1.���ú��׵���Ϣ
    char mine[ROWS][COLS]={0};
    //2.�Ų���׵���Ϣ
    char show[ROWS][COLS]={0};
    //��ʼ��
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //��ӡ
    //DisplayBoard(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //������
    SetMine(mine,ROW,COL);
    //DisplayBoard(mine,ROW,COL);
    //ɨ��
    FindMine(mine,show,ROW,COL);
}

void test()
{
    int input=0;
    srand((unsigned int)time(NULL));
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
            break;
        default:
            printf("ѡ�����������ѡ��\n");
            break;
        }
    }
    while(input);
}

int main()
{
    test();
    return 0;
}
