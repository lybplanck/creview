#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int c=1;
    for(int i=n;i>=1;i--)
    {
        c=c*i;

        //1=1*n
        //n=n*n-1*...n-n-1>>1
        
    }
    printf("%d",c);
    return 0;
}
// 阶乘【C/C++/Java/Python】
// 描述
// 求一个正整数n（n≤13）的阶乘。

// 格式
// 输入格式
// 输入一个数n（1~12）。

// 输出格式
// 输出n！的结果。

// 样例
// 输入样例
// 3
// 输出样例
// 6