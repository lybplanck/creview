#include<stdio.h>
#include<math.h>
#define pi 3.14159
int main()
{
    int h,r;
    scanf("%d%d",&h,&r);
    double geshu;
    geshu=20000/(pi*r*r*h);
    int geshud;
    geshud=ceil(geshu);
    printf("%d",geshud);
   return 0;
}
// 大象喝水
// 描述
// 一只大象口渴了，要喝20升水才能解渴，但现在只有一个深h厘米，
// 底面半径为r厘米的小圆桶(h和r都是整数)。问大象至少要喝多少桶水才会解渴。

// 格式
// 输入格式
// 输入有一行：包行两个整数，以一个空格分开，分别表示小圆桶的深h和底面半径r，
// 单位都是厘米。

// 输出格式
// 输出一行，包含一个整数，表示大象至少要喝水的桶数。

// 样例
// 输入样例
// 23 11
// 输出样例
// 3