#include<stdio.h>
#include<math.h>
int prime(int a)
{
    int end;
    if(a<2) return 0;
    end=sqrt(a);
    for(int i=2;i<=end;i++)
    {
        if(a%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
     int s,n,max;
    scanf("%d",&s);
    for(int i=2;i<s-2;i++)
    {
        if(prime(i)&&prime(s-i))
        {
            int c=i*(s-i);
            if(max<c)
            {
                max=c;
            }
        }
    }
    printf("%d",max);
    return 0;
}
// 质数的和与积【C/C++/Java/Python】
// 描述
// 两个质数的和是S，它们的积最大是多少？

// 格式
// 输入格式
// 一个不大于10000的正整数S，为两个质数的和。

// 输出格式
// 一个整数，为两个质数的最大乘积。数据保证有解。

// 样例
// 输入样例
// 50
// 输出样例
// 589