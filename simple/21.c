#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    if(n>0)
    {
        puts("positive");
    }
    else if(n==0)
    {
        puts("zero");
    }
    else    if(n<0)
    {
        puts("negative");
    }
    return 0;
}
// 判断数正负
// 描述
// 给定一个整数N，判断其正负。

// 如果N大于0，输出positive；

// 如果N等于0，输出zero；

// 如果N小于0，输出negative。

// 格式
// 输入格式
// 输入一个整数。

// 输出格式
// 如果N大于0，输出positive；

// 如果N等于0，输出zero；

// 如果N小于0，输出negative。

// 样例
// 输入样例
// 1
// 输出样例
// positive