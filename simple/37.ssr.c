#include<stdio.h>

int renderLine (int space, int str, char n){
    for(int j=1;j<=space;j++)//控制空格数输出，这个数目与i成反相关
        printf(" ");
    for(int j=1;j<=str;j++)//控制输出的星号数，行数*2-1
        printf("%c",n);
        printf("\n");//每输出完一行要换行
}

int main()
{
    char n;
    scanf("%c",&n);
    int line = 5;
    scanf("%d",&line);

    int zheng=(line-1)/2+1;
    int fu=zheng-1;
    
    for(int i=1;i<=zheng;i++)//控制行数
    {
        renderLine(zheng-i, 2*i-1, n);
    }
    for(int i=1;i<=fu;i++)
	{
        renderLine(i, line-2*i, n);
    }
    return 0;
}
// 字符菱形
// 描述
// 给定一个字符，用它构造一个对角线长5个字符，倾斜放置的菱形。

// 格式
// 输入格式
// 输入只有一行， 包含一个字符。

// 输出格式
// 该字符构成的菱形。

// 样例
// 输入样例
// *
// 输出样例
//   *
//  ***
// *****
//  ***
//   *