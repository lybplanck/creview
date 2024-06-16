#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>=0&&n<=59)
    {
        puts("failed");
    }
    if(n>=60&&n<=69)
    {
        puts("pass");
    }
    if(n>=70&&n<=79)
    {
        puts("medium");
    }
    if(n>=80&&n<=89)
    {
        puts("good");
    }
    if(n>=90&&n<=100)
    {
        puts("excellence");
    }
    return 0;
}
// 输出成绩档次【C/C++/Java/Python】
// 描述
// 给定一个分数n（n是0~100之间的整数），输出对应的成绩档次。各档次如下：

// 0~59分： failed
// 60~69分：pass
// 70~79分：medium
// 80~89分：good
// 90~100分：excellence

// 例如输入50，应输出“failed”；输入70，应输出：“medium”；输入100，应输出“excellence”

// 格式
// 输入格式
// 一个整数n，题目保证0≤n≤100

// 输出格式
// 一个字符串，表示成绩对应的档次

// 样例
// 输入样例
// 72
// 输出样例
// medium