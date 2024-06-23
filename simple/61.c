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
    for(int i=2;i<=n;i++)
    {
        if(prime(i))
        {
            cnt++;
        }
    }
    printf("%d",cnt);
    return 0;
}
// 素数个数【C/C++/Java/Python】
// 描述
// 编程求2～n（n为大于2的正整数，且小于等于50000）中有多少个素数。

// 格式
// 输入格式
// 输入n(2≤n≤50000)。

// 输出格式
// 素数个数。

// 样例
// 输入样例
// 10
// 输出样例
// 4