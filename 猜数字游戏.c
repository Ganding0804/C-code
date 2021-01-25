#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//猜数字游戏
void menu()
{
    printf("*****************************************\n");
    printf("***********    猜数字游戏    ************\n");
    printf("*****      1.play       0.exit      *****\n");
    printf("*****************************************\n");
}

void game()
{
    //1.生成一个随机数
    int ret=0;
    int guess=0;
    ret = rand()%100+1; //生成1~100之间的随机数（因为rand()函数生成随机数的范围是[0,RAND_MAX]即为[0,32767],所以才会采用这种表达式）
    //2.猜数字
    printf("请开始猜数字：\n");
    while(1)
    {

        scanf("%d",&guess);
        if(guess<ret)
        {
            printf("猜小了\n");
        }
        else if(guess>ret)
        {
            printf("猜大了\n");
        }
        else
        {
            printf("恭喜你，猜对了！\n");
            printf("\n");
            break;
        }
    }
}

int main()
{
    int input=0;
    //拿时间戳来设置随机数的生成起始点
    //void srand(unsign int seed); 括号里需要一个整型变量
    //时间戳是当前计算机的时间-计算机的起始时间（1970.1.1.0:0:0）=(xxxxx)秒
    //想要获得时间戳需要time()函数
    //time_t time(time_t *timer); time_t本质上是一个长整型，只不过经过了重命名
    srand((unsigned int)time(NULL)); //这里进行了强制转换long->int
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
                printf("\n");
                break;
            default:
                printf("选择错误\n");
                printf("\n");

        }
    }while(input);
    return 0;
}
