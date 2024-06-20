#include<stdio.h>
#include <string.h>
int main()
{
    char str[21];
    gets(str);
    int cnt[128]={0};
    int length=strlen(str);
    int errocount=0;
    for(int i=0;i<length;i++)
    {
        cnt[str[i]]++;
    }
    for(int i=0;i<length;i++)
    {
        if(cnt[str[i]])
    }
    return 0;
}
//  合法C标识符
// 描述
// 给定一个不包含空白符的字符串，请判断是否是C语言合法的标识符号(注：题目保证这些字符串一定不是C语言的保留字)。

// C语言标识符要求：

// 1.非保留字；//指在高级语言中已经定义过的字,程序员不能再将这些字作为变量名、过程名或函数名使用。 保留字包括关键字和未使用的保留字。

// 2.只包含字母、数字及下划线（“_”）。

// 3.不以数字开头。

// 格式
// 输入格式
// 一行，包含一个字符串，字符串中不包含任何空白字符，且长度不大于20。

// 输出格式
// 一行，如果它是C语言的合法标识符，则输出yes，否则输出no。

// 样例
// 输入样例
// RKPEGX9R;TWyYcp
// 输出样例
// no