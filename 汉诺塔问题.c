#include <stdio.h>
#include <stdlib.h>

//汉诺塔问题

/*
汉诺塔是根据一个印度传说形成的数学问题:
有三根杆子A, B, C. A杆上有n个穿孔圆盘, 盘的尺寸由下到上依次变小.
    要求按照下列规则将所有圆盘移至C杆:
        1.每次只能移动一个圆盘
        2.大盘不能叠在小盘上面
找出最少需要移动多少次, 并打印移动的方案.
*/
int count=0;
void move(char a,char b)
{
    count++;
    printf("%c-->%c\n",a,b);
}

void hanoi(int n,char a,char b,char c)  //n是饼片数量，a、b、c是放饼片的柱子
{                                       //函数意思是，把a柱子上的n个饼片经由b柱子移到c柱子上
    if(n==1)
        move(a,c);  //直接把a柱子上的饼片移到c柱子上
    else
    {
        hanoi(n-1,a,c,b);  //把a柱子上的n-1个饼片经由c柱子移到b柱子上
        move(a,c);         //把a柱子上的第n个饼片移到c柱子上
        hanoi(n-1,b,a,c);  //把b柱子上的n-1个饼片经由a柱子移到c柱子上
    }
}

int main()
{
    int n=0;
    printf("请输入片数：");
    scanf("%d",&n);
    printf("步骤如下：\n");
    hanoi(n,'a','b','c');
    printf("总计需要%d次\n",count);
    return 0;
}
