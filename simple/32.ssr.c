#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    double sum=0;
    int f1=2,f2=1,df1,df2;
    double yi;
    for(int i=0;i<n;i++)
    {
       yi=(double)f1/f2;
       
        df1=f1;
       df2=f2;
       sum=sum+yi;
      // 2(f1)/1(f2)，3/2，5/3，8/5，13/8，21/13，…
      //3---df1;2---df2;
      //2+3=5(f1)=df1+df2;
      //1+2=3(f2)=df1;
        f1=df1+df2;
        f2=df1;
    }
    printf("%.3lf",sum);
    return 0;
}
// 求分数和
// 描述
// 有一个分数序列：2/1，3/2，5/3，8/5，13/8，21/13，…

// 求出这个序列的前n项之和。

// 格式
// 输入格式
// 一个正整数n(n≤20)，表示要求和的项数

// 输出格式
// 输出前n项的和，保留3位小数。

// 样例
// 输入样例
// 1
// 输出样例
// 2