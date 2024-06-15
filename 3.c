// 计算(a+b)*c的值【C/C++/Java/Python】
// 描述
// 给定3个整数a、b、c，计算表达式(a+b)*c的值。

// 其中－10,000 ≤ a,b,c ≤10,000

// 格式
// 输入格式
// 只有一行，包括三个整数a、b、c, 数与数之间以一个空格分开。

// 输出格式
// 只有一行，即表达式的值。

// 样例
// 输入样例
// 2 3 5
// 输出样例
// 25


#include<stdio.h>
int main()
{
	int a,b,c,e;
	scanf("%d %d %d",&a,&b,&c);
	e=(a+b)*c;
	printf("%d",e);
 	return 0;
}
