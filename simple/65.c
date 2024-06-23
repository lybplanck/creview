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
    int f1=1,f2=2,f3,n,cnt=0;
    scanf("%d",&n);
    for(int i=3;;i++)
    {
        f3=f1+f2;
        
        f1=f2;
        f2=f3;
        if(prime(f3)==0)
        {
            cnt++;
        }
        if(cnt==n)
        {
            printf("%d",f3);
        }
    }
    return 0;
}
//值得注意；合数为非素数
// 斐波那契数列中的合数
// 描述
// 斐波那契数列是一个形如下面的数列：

// 1,1,2，3,5,8,13,21,34,55,89……

// 从第3项开始，有：f(n)=f(n-1)+f(n-2)

// 在这个数列中，有些数是合数，比如8、21、34等，有些数是素数，比如2、3、5、13等。而前面两个1既不是合数也不是素数。

// 下面请你求出该数列中指定的第n个合数。比如n=1时，对应的数是8；n=2时，对应的数是21。

// 格式
// 输入格式
// 一个正整数n（1≤n≤30）

// 输出格式
// 一个正整数，在斐波那契数列中排第n位的合数

// 样例
// 输入样例
// 3
// 输出样例
// 34