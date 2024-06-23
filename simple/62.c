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
    
    int n,cnt=0;
    scanf("%d",&n);
    for(int i=0;;i++)
    {
        if(prime(i))
        {
            cnt++;
        }
        if(cnt==n)
        {
           printf("%d",i);
           break;
        }
    }
    
}
// 第n小的质数【C/C++/Java/Python】
// 描述
// 输入一个正整数n，求第n小的质数。2是第1个质数，3是第2个质数，依次类推

// 格式
// 输入格式
// 一个不超过10000的正整数n。

// 输出格式
// 第n小的质数。

// 样例
// 输入样例
// 10
// 输出样例
// 29