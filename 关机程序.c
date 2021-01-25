#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char arr[20]={0};
    //shutdown -s -t 60
    //system()-执行系统命令
    system("shutdown -s -t 60");
again:
    printf("请注意，你的电脑将在60秒后关机\n如果输入：我是猪，就取消关机\n请输入：");
    scanf("%s",arr);
    if(strcmp(arr,"我是猪")==0) //比较两个字符串用strcmp()
    {
        system("shutdown -a");
    }
    else
    {
        printf("\n");
        printf("你是笨蛋嘛\n");
        printf("\n");
        goto again;
    }
    return 0;
}
