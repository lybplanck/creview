#include<stdio.h>
int main()
{
    int n,m,sum=0;
    scanf("%d%d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(m==a[i])
        {
            sum++;
        }
    }
    printf("%d",sum);
    return 0;
}
// 与指定数字相同的数的个数
// 描述
// 输出一个整数序列中与指定数字相同的数的个数。
//输入包含2行：第1行为N和m，N表示整数序列的长度(N≤100)；m表示指定的数字；第2行为N个整数，整数之间以空格分开。输出为N个数中与m相同的数的个数。

// 格式
// 输入格式
// 第1行为N和m，表示整数序列的长度(N≤100)和指定的数字， 中间用一个空格分开；

// 第2行为N个整数，整数之间以一个空格分开。

// 输出格式
// 输出为N个数中与m相同的数的个数。

// 样例
// 输入样例
// 3 2
// 2 3 2
// 输出样例
// 2