#include<stdio.h>
#include<math.h>
int main()
{
    double bang,kg;
    scanf("%lf%lf",&bang,&kg);
    
    printf("%.4lf %.4lf",0.4536*bang,kg/0.4536);
    return 0;
}
// 重量换算【C/C++/Java/Python】
// 描述
// 英制和公制重量换算公式：1磅=0.4536公斤
// 给定两个用实数表示的重量值，第一个单位是磅，第二个单位是公斤
// 要求将第一个换算成公斤输出，将第二个换算成磅输出，结果保留4位小数。

// 例如输入1.0 1.0，输出为：0.4536 2.2046
// 再比如输入：1.23 0.85，输出为：0.5579 1.8739

// 格式
// 输入格式
// 输入一行两个浮点数，第一个单位是磅，第二个单位公斤，中间用空格分隔。题目保证输入不超过双精度数的范围和精度。

// 输出格式
// 输出一行，是两个换算后的浮点数，小数点后面保留4位，中间用空格分隔。

// 样例
// 输入样例
// 123.4  456.3
// 输出样例
// 55.9742  1005.9524