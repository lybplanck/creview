#include<stdio.h>
#include<math.h>
int wan(int a)
{
    if(sqrt(a)-(int)(sqrt(a))==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int sushu(int b)//值得注意素数
{
    int end;
    if(b<2)
    {
        return 0;
    }
    end=sqrt(b);
    for(int i=2;i<=end;i++)
    {
        if(b%i==0)
        {
            return 0;
        }
        
    }
    return 1;//值得注意这个要写在循环外面
        
}
int main()
{
    int s,t;
    scanf("%d%d",&s,&t);

    
    
    for(int i=s;i<=t;i++)
    {
        int c=i+1;
        if(wan(i)&&sushu(c))
        {
            printf("%d %d\n",i,c);
        }
    }
    return 0;
}
// 亲密数对（一）【C/C++/Java/Python】
// 描述
// 在自然数中有一种这样的数：它自身是一个完全平方数，加上1之后是一个素数，这一对数被称为亲密数对，请编程找出指定区域内的所有亲密数对。
// 例如在[10,100]之间的亲密数对有：（16,17），（36,37）
// 在[100,200]之间的亲密数对有：（100,101），（196,197）
// 在[1000,2000]之间的亲密数对有：（1296，1297），（1600，1601）

// 格式
// 输入格式
// 一行，两个整型数据s和t，表示指定的区间[s,t]，且10≤s≤t≤10,000,000，中间以空格分隔。题目保证指定区间内至少有一对亲密数

// 输出格式
// 每一对亲密数对占一行，第一个是完全平方数，第二个是素数，中间以空格分隔。

// 样例
// 输入样例
// 10  80
// 输出样例
// 16  17
// 36  37