#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    if(x>=-1&&x<=1&&y>=-1&&y<=1)
    {
        puts("yes");
    }
    else{
        puts("no");
    }
    return 0;
}
// 点和正方形的关系
// 描述
// 有一个正方形，四个角的坐标（x,y)分别是(1，-1)，(1，1)，(-1，-1)，(-1，1)，x是横轴，y是纵轴。
// 写一个程序，判断一个给定的点是否在这个正方形内(包括正方形边界)。如果点在正方形内，则输出yes，否则输出no。

// 格式
// 输入格式
// 输入一行，包括两个整数x、y，以一个空格分开，表示坐标(x,y)。

// 输出格式
// 输出一行，如果点在正方形内，则输出yes，否则输出no。

// 样例
// 输入样例
// 1 1
// 输出样例
// yes