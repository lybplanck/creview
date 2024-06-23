#include<stdio.h>
int gcd(int a,int b)
{
    int r;
    while(b)//值得注意：最大公约数
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int lcm(int a,int b)
{
    return((a*b)/gcd(a,b));
}
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d",lcm(m,n));
// 在C语言中，求两个数的最小公倍数可以使用以下方法:
// 1.先求出两个数的最大公约数(GCD).(课本p54)
// 2.然后用两个数的乘积除以最大公约数，得到最小公倍数。

    return 0;
}
// 最小公倍数
// 描述
// 输入两个正整数m和n，求其最小公倍数。

// 格式
// 输入格式
// 输入一行，m和n的值。

// 输出格式
// 输入m和n的最小公倍数

// 样例
// 输入样例
// 5 3
// 输出样例
// 15