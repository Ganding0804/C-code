#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 3
#define COL 3


//三子棋

void menu()
{
    printf("*******************************************\n");
    printf("************     三子棋游戏    ************\n");
    printf("******     1.play         0.exit     ******\n");
    printf("*******************************************\n");
}

//初始化棋盘
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

//打印棋盘
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
        //1.打印一行的数据
        int j=0;
        for(j=0;j<col;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<col-1)
                printf("|");
        }
        printf("\n");
        //2.打印分割行
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

//玩家下棋
void PlayerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("玩家走：\n");
    while(1)
    {
        printf("请输入要下的坐标：");
        scanf("%d %d",&x,&y);
        //判断x,y坐标合法性
        if(x>=1 && x<=row && y>=1 && y<=col)
        {
            if(board[x-1][y-1]==' ')
            {
                board[x-1][y-1]='X';
                break;
            }
            else
            {
                printf("该坐标被占用\n");
            }
        }
        else
        {
            printf("坐标非法，请重洗输入！\n");
        }
    }
}

//电脑下棋
void ComputerMove(char board[ROW][COL],int row,int col)
{
    int x=0;
    int y=0;
    printf("电脑走：\n");
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

//返回1表示棋盘满了
//返回0表示棋盘没满
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
                return 0;//没满
            }
        }
    }
    return 1;//满了
}

//判断输赢
//玩家赢 - 'X'
//电脑赢 - 'O'
//平局   - 'Q'
//继续   - 'C'
char IsWin(char board[ROW][COL],int row,int col)
{
    int i=0;
    //行
    for(i=0;i<row;i++)
    {
        if(board[i][0]==board[i][1] && board[i][1]==board[i][2] && board[i][1]!=' ')
        {
            return board[i][1];
        }
    }
    //列
    for(i=0;i<col;i++)
    {
        if(board[0][i]==board[1][i] && board[1][i]==board[2][i] && board[1][i]!=' ')
        {
            return board[1][i];
        }
    }
    //斜
    if(board[0][0]==board[1][1] && board[1][1]==board[2][2] && board[1][1]!=' ')
        return board[1][1];
    if(board[2][0]==board[1][1] && board[1][1]==board[0][2] && board[1][1]!=' ')
        return board[1][1];
    //平局
    if(IsFull(board,ROW,COL)==1)
    {
        return 'Q';
    }
    return 'C';
}

void game()
{
    char ret=0;
    //数组存放棋盘信息
    char board[ROW][COL]={0};//全部打印空格
    //初始化棋盘
    InitBoard(board,ROW,COL);
    //打印棋盘
    DisplayBoard(board,ROW,COL);
    //下棋
    while(1)
    {
        //1.玩家下棋
        PlayerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        //判断玩家是否赢
        ret=IsWin(board,ROW,COL);
        if(ret!='C')
        {
            break;
        }
        //2.电脑下棋
        ComputerMove(board,ROW,COL);
        DisplayBoard(board,ROW,COL);
        //判断电脑是否赢
        ret=IsWin(board,ROW,COL);
        if(ret!='C')
        {
            break;
        }
    }
    if(ret=='X')
    {
        printf("玩家赢\n");
    }
    else if(ret=='O')
    {
        printf("电脑赢\n");
    }
    else
    {
        printf("平局\n");
    }
}

void text()
{
    int input=0;
    srand((unsigned int) time(NULL));
    do
    {
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch(input)
        {
            case 1:
                printf("三子棋\n");
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("输入错误，请重洗输入\n");
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
