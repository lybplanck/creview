#include<stdio.h>
#include<math.h>
int main()
{
    double f;
    scanf("%lf",&f);
    int s;
    if(f==0)
    {
        s=0;
    }
    if(f>0)
    {
        s=ceil(f);
    
    }
    
    if(f<0)
    {
        s=ceil(f)-1;
         
    }
    printf("%d",s);
    return 0;
}
// 向上取整
// 描述
// 给定一个双精度浮点数，对其向上取整。向上取整规则如下：

// 对于正数，取得不小于这个正数的最小的那个正整数。比如3.7，向上取整为4；
// 2.01向上取整为3；5.0向上取整为5。

// 对于负数，取得不大于这个负数的最大的那个负整数。比如-3.7，向上取整为-4；
// -2.01向上取整为-3；-5.0向上取整为-5

// 格式
// 输入格式
// 一个浮点数f， -1,000,000,000≤f≤1,000,000,000

// 输出格式
// 一个向上取整得到的整数

// 样例
// 输入样例
// -12.354
// 输出样例
// -13