#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        if(i%7!=0 && ( (i%10!=7) && (((i/10)%10)!=7)))
        {
            sum=sum+i*i;
        }
    }
    printf("%d",sum);
}
// 与7无关的数
// 描述
// 一个正整数，如果它能被7整除，或者它的十进制表示法中某一位上的数字为7，则称其为与7相关的数。现求所有小于等于n(n<100)与7无关的正整数的平方和。

// 格式
// 输入格式
// 输入为一行,正整数n(n < 100)。

// 输出格式
// 输出一行，包含一个整数，即小于等于n的所有与7无关的正整数的平方和。

// 样例
// 输入样例
// 21
// 输出样例
// 2336