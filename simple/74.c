#include<stdio.h>
double fangcha(int b[],int size)
{
    double sum=0;
    for(int i=0;i<size;i++)
    {
        sum=sum+b[i];
    }
    int x=sum/size;
    double sum1=0;
    for(int i=0;i<size;i++)
    {
        int c=(b[i]-x)*(b[i]-x);
        sum1=sum1+c;
    }
    double s=sum1/size;
    return s;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("%.2lf",fangcha(a,n));
}
// 求方差
// 描述
// 方差是统计学中的一个术语，用于描述一组数据的离散程度。设有n个数据Xi(i∈1,2,3……n)，其平均值为x, 方差公式：

// S= ∑(Xi - x)^2/n

// 例如序列：12 69 45 63 59，其均值为49.6，方差为415.84

// 再有序列：25 85 63 28 86 18 45 48 21 56，均值为47.5，方差为566.65

// 格式
// 输入格式
// 两行，第一个是一个正整数n（n≤1000），表示后面有n个待处理数据。第二行是n个正整数，所有数据均小于10000，数据之间以空格分隔。

// 输出格式
// 一个浮点数，求出的方差值，保留两位小数。

// 样例
// 输入样例
// 10
// 61 70 40 14 15 18 5 58 35 64 
// 输出样例
// 523.60