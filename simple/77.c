#include<stdio.h>//值得注意：二进制转十进制
#include<string.h>
int main()
{
    char s[32];
    int n=0,q=1;
    gets(s);
    for(int i=strlen(s)-1;i>=0;i--)
    {
    //     1+1=10;
    //     09->10
    //     01->10->11->100->101--110--111---1000
        n=n+(s[i]-48)*q;
        q=q*2;
    }
    printf("%d",n);
    return 0;
}
// 二进制转十进制【C/C++/Java/Python】
// 描述
// 给定一个正的二进制数，将其转换为十进制数输出。

// 例如二进制数：110100101，转成十进制数是：421

// 例如二进制数：110110110，转成十进制数是：438

// 格式
// 输入格式
// 一个正的二进制数，其长度不超过31位

// 输出格式
// 对应的十进制正整数

// 样例
// 输入样例
// 101011010
// 输出样例
// 346