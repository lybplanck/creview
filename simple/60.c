#include<stdio.h>
int check(char id[])
{
    int sum=0;
    int w[18]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2,1};
    for(int i=0;i<17;i++)
    {
        sum=sum+(id[i]-48)*w[i];
    }
    sum=sum+id[17];
    if(sum%11==1)
    {
        return 1;
    }
    else return 0;
}
int main()
{
    char id[19];
    gets(id);
    for(int i=0;i<=10;i++)
    {
        id[17]=i;
        if(check(id))
        {
            if(id[17]==10)
            {
                puts("X");
            }
            else
            {
                printf("%d",i);
            }
        }
    }
    return 0;
}
// 生成身份证校验码
// 描述
// 我国的居民身份证是18位字符的编码，每个人的编码都是唯一的，校验规则如下：

// ∑（ai×wi）mod 11 = 1

// i表示号码字符从左至右包括校验码字符在内的位置序号；
//ai表示第i位置上的号码字符值；Wi表示第i位置上的加权因子。
//即将各位上的数值乘上位权之和对11取余，余数为1则表示该编码正确。注意：如果最后一位校验码是“X”，则代表该校验码的数值为10。

// 各位的权值依次是：7，9，10，5，8，4，2，1，6，3，7，9，10，5，8，4，2，1

// 例如某身份证号码为：370683198901117657，最后一位“7”是正确的校验码。

// 又如某号码为：470683198902117657，最后一位“7”是错误的校验码。

// 现在给定前面17位的字符串，请求出最后一位校验码。

// 比如给定前面17位字符串分别是：43032120051015005、43032120050917021 和 43038120050528002

// 则求出的最后一位校验码分别应为：5、9 和 X

// 格式
// 输入格式
// 一个17位的字符串，表示身份证的前面17位。

// 输出格式
// 一个字符，表示所求的校验码

// 样例
// 输入样例
// 21038119830104383
// 输出样例
// 0