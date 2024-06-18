#include<stdio.h>
int main()
{
    char n;
    scanf("%c",&n);
    for(int i=1;i<=3;i++)//控制行数
    {
        for(int j=1;j<=3-i;j++)//控制空格数输出，这个数目与i成反相关
            printf(" ");
        for(int j=1;j<=2*i-1;j++)//控制输出的星号数，行数*2-1
            printf("%c",n);
            printf("\n");//每输出完一行要换行
        
    }
   for(int i=1;i<=2;i++)
		{
			for(int j=1;j<=i;j++)
			printf(" ");
			for(int j=1;j<=4-2*i+1;j++)
			printf("%c",n);
			printf("\n");
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