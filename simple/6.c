// 苹果和虫子
// 描述
// 你买了一箱n个苹果，很不幸的是买完时箱子里混进了一条虫子。虫子每x小时能吃掉一个苹果，假设虫子在吃完一个苹果之前不会吃另一个，那么经过y小时你还有多少个完整的苹果？

// 格式
// 输入格式
// 输入仅一行，包括n，x和y（均为整数）。

// 输出格式
// 输出也仅一行，剩下的苹果个数。

// 样例
// 输入样例
// 10 4 9
// 输出样例
// 7
#include<stdio.h>
#include<math.h>
int main()
{
	int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	int s=n-ceil(1.0*y/x);
	if(s<0)s=0;
	printf("%d\n",s);
 	return 0;
}