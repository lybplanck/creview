#include<stdio.h>
#include<math.h>
int wan(int a)
{
    //值得注意：完全平方数
    if(sqrt(a)-(int)(sqrt(a))==0)//值得注意：int强制转换,括号加在int上
    {
        return 1;
    }
    else
    {return 0;}
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=n;;i++)
    {
        int c=i+150;
        int b=c+136;
        if(wan(c)==1&&(wan(b)==1))
        {
            printf("%d",i);
            break;
        }
    }
    return 0;
}
// 快乐的数字 【C/C++/Java/Python】
// 描述
// 有一种特殊的正整数，它加上150后是一个完全平方数，再加上136又是一个完全平方数。从键盘输入一个整数n，求符合条件从n开始的最小的一个数。
// 例如给定【10】，应输出【75】

// 格式
// 输入格式
// 输入一个整数n（n≤940）

// 输出格式
// 求符合条件从n开始的最小的一个数。

// 样例
// 输入样例
// 10
// 输出样例
// 75