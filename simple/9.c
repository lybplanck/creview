#include<stdio.h>
int main()
{
    double x,a,b,c,d;
    scanf("%lf%lf%lf%lf%lf",&x,&a,&b,&c,&d);
    double f;
    
    f = a*x*x*x + b*x*x + c*x + d;
    printf("%.7lf",f);
    return 0;
}
// 计算多项式的值
// 描述
// 对于多项式f(x)=ax3+bx2+cx+d和给定的a,b,c,d,x，计算f(x)的值，保留到小数点后7位。

// 格式
// 输入格式
// 输入仅一行，包含5个实数，分别是x，及参数a、b、c、d的值，
//每个数都是绝对值不超过100的双精度浮点数。数与数之间以一个空格分开。

// 输出格式
// 输出一个实数，即f(x)的值，保留到小数点后7位。

// 样例
// 输入样例
// 2.31 1.2 2 2 3
// 输出样例
// 33.0838692