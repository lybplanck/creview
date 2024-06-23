#include<stdio.h>
int wanquanshu(int mur)//值得注意：完全数
{
    int sum=1;
    for(int i=2;i<mur;i++)
    {
        if(mur%i==0)
        {
            sum=sum+i;
        }
        
    }
    if(sum==mur)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<=n;i++)
    {
        if(wanquanshu(i))
        {
            printf("%d\n",i);
        }
    }
}
// 求正整数2和n之间的所有完全数【C/C++/Java/Python】
// 描述
// 求正整数2和n（n≤30000）之间的所有完全数，一行输出一个。
// 所谓完全数：因子之和等于它本身的自然数，如6=1+2+3，注意因子包括1但不包括自身。

// 格式
// 输入格式
// 输入n。

// 输出格式
// 一行一个数,按由小到大的顺序。

// 样例
// 输入样例
// 7
// 输出样例
// 6