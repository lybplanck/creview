#include<stdio.h>
#include<string.h>
void one(char d[])//值得注意这三个函数
{
    //abcdefghijklmnopqrstuvwxyz
    for(int i=0;d[i]!='\0';i++)
    {
        if(d[i]>='a'&&d[i]<='w'||d[i]>='A'&&d[i]<='W')
        {
            d[i]=d[i]+3;
        }
        else if(d[i]>='x'&&d[i]<='z'||d[i]>='X'&&d[i]<='Z')  //值得注意使用else if
        {
           d[i]=d[i]-23;
        }
    }
    return;
}
void two(char str[])
{
    int left,right,i;
    char temp;
    for(i=0;str[i]!='\0';i++);
    for(left=0,right=i-1;left<right;left++,right--)
    {
        temp=str[left];
        str[left]=str[right];
        str[right]=temp;
    }
    return;
}
void three(char str[])
{
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a'&&str[i]<='z')
        {
            str[i]=str[i]-32;
        }
        else if(str[i]>='A'&&str[i]<='Z')
        {
            str[i]=str[i]+32;
        }
    }
    return;
}
int main()
{
    char a[151];
    gets(a);
    
    
    one(a);
    two(a);
    three(a);
    puts(a);
    return 0;
}
// 加密的病历单
// 描述
// 小英是药学专业大三的学生，暑假期间获得了去医院药房实习的机会。

// 在药房实习期间，小英扎实的专业基础获得了医生的一致好评，
// 得知小英在计算概论中取得过好成绩后，主任又额外交给她一项任务，解密抗战时期被加密过的一些伤员的名单。

// 经过研究，小英发现了如下加密规律(括号中是一个“原文 -> 密文”的例子)

// 1.原文中所有的字符都在字母表中被循环左移了三个位置（dec  -> abz）
// 2.逆序存储（abcd -> dcba ）
// 3.大小写反转（abXY -> ABxy）
// 比如密文是：abfnlbm

// 解密之后得到的原文是：PEOQIED

// 格式
// 输入格式
// 一个加密的字符串。(长度小于150且只包含大小写字母)

// 输出格式
// 输出解密后的字符串。

// 样例
// 输入样例
// GSOOWFASOq
// 输出样例
// Trvdizrrvj