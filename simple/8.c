#include<stdio.h>
#define pi 3.14159
double D(double a)
{
    return a * 2.0;
}
double C(double a)
{
    return 2.0*pi*a;
}
double S(double a)
{
    return pi*a*a;
}
int main()
{
    double r;
    scanf("%lf",&r);
    printf("%.4lf %.4lf %.4lf",D(r),C(r),S(r));
    
}
// 与圆相关的计算
// 描述
// 出圆的半径，求圆的直径、周长和面积。输入圆的半径实数r，输出圆的直径、周长、面积，每个数保留小数点后4位。圆周率取值为3.14159。

// 格式
// 输入格式
// 输入一行，一个浮点数，表示圆的半径。

// 输出格式
// 输出一行，包含三个数，分别表示圆的直径、周长、面积，数与数之间以一个空格分开，每个数保留小数点后4位。

// 样例
// 输入样例
// 3.0
// 输出样例
// 6.0000 18.8495 28.2743