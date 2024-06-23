#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        int s=n%10;
        printf("%d ",s);
        n=(n-s)/10;
        
    }
    
    return 0;
}
// 分离整数的各个数
// 描述
// 给定一个整数n(1≤n≤100000000)，要求从个位开始分离出它的每一位数字。从个位开始按照从低位到高位的顺序依次输出每一位数字。

// 格式
// 输入格式
// 输入一个整数，整数在1到100000000之间

// 输出格式
// 从个位开始按照从低位到高位的顺序依次输出每一位数字。数字之间以一个空格分开

// 样例
// 输入样例
// 123
// 输出样例
// 3 2 1