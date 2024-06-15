// 温度表达转化【C/C++/Java/Python】
// 描述
// 利用公式C = 5*(F-32)/9进行计算转化，其中C表示摄氏温度，F表示华氏温度。

// 题目输入华氏温度F，要求输出对应的摄氏温度C，要求精确到小数点后5位。

// 格式
// 输入格式
// 输入一行，包含一个实数F，表示华氏温度。（100000000≥F≥ -459.67）

// 输出格式
// 输出一行，包含一个实数，表示对应的摄氏温度，要求精确到小数点后5位。

// 样例
// 输入样例
// 41.0
// 输出样例
// 5.00000
#include<stdio.h>
int main()
{
	double F;
	scanf("%lf",&F);
	double C=5*(F-32)/9;
	printf("%.5lf",C);
 	return 0;
}