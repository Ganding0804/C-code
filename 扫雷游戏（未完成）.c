#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define EASY_COUNT 5

//扫雷游戏

//菜单
void menu()
{
    printf("*******************************************\n");
    printf("*******           扫雷游戏           ******\n");
    printf("*******      1.play      0.exit      ******\n");
    printf("*******************************************\n");
}

//初始化
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

//打印
void DisplayBoard(char board[ROWS][COLS],int row,int col)
{
    int i=0;
    int j=0;
    //打印列号
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

//布置雷
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

//计算想x,y坐标周围有几个雷
//'1'-'0'=1
int win=0;
int get_mine_count(char mine[ROWS][COLS],int x,int y)
{

    return mine[x-1][y-1]+mine[x-1][y]+mine[x-1][y+1]+
           mine[x][y-1]+mine[x][y+1]+
           mine[x+1][y-1]+mine[x+1][y]+mine[x+1][y+1]-8*'0';
}

//当周围没有雷的时候进行展开
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

//排雷
void FindMine(char mine[ROWS][COLS],char show[ROWS][COLS],int row,int col)
{
    int x=0;
    int y=0;

    //判断坐标合法性
    while(win<row*col-EASY_COUNT)
    {
        printf("请输入排查雷的坐标：");
        scanf("%d %d",&x,&y);
        if(x>=1 && x<=row && y>=1 &&y<=col)
        {
            //坐标合法
            //1.踩雷
            if(mine[x][y]=='1')
            {
                printf("很遗憾，你踩雷了\n");
                DisplayBoard(mine,row,col);
                break;
            }
            else  //2.不是雷
            {
                //计算想x,y坐标周围有几个雷
                Spread(mine,show,x,y);

                DisplayBoard(show,row,col);
            }
        }
        else
        {
            printf("输入坐标非法，请重新输入！\n");
        }
    }
    if(win==row*col-EASY_COUNT)
    {
        printf("恭喜你，排雷成功！\n");
        DisplayBoard(mine,row,col);
    }
}

void game()
{
    //雷的信息存储
    //1.放置好雷的信息
    char mine[ROWS][COLS]={0};
    //2.排查出雷的信息
    char show[ROWS][COLS]={0};
    //初始化
    InitBoard(mine,ROWS,COLS,'0');
    InitBoard(show,ROWS,COLS,'*');
    //打印
    //DisplayBoard(mine,ROW,COL);
    DisplayBoard(show,ROW,COL);
    //布置雷
    SetMine(mine,ROW,COL);
    //DisplayBoard(mine,ROW,COL);
    //扫雷
    FindMine(mine,show,ROW,COL);
}

void test()
{
    int input=0;
    srand((unsigned int)time(NULL));
    do
    {
        menu();
        printf("请选择：");
        scanf("%d",&input);
        switch(input)
        {
        case 1:
            game();
            break;
        case 0:
            printf("退出游戏\n");
            break;
        default:
            printf("选择错误，请重新选择！\n");
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
