#include<stdio.h>
#include<math.h>
int prime(int b)
{
    int end;
    if(b<2) return 0;
    end=sqrt(b);
    for(int i=2;i<end;i++)
    {
        if(b%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,max;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
        if(prime(a[i]))
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
    }
    printf("%d",max);
    return 0;
}
// 最大的素数【C/C++/Java/Python】
// 描述
// 给定n（n≤100）个正整数，所有正整数均≤100,000；求其中最大的那个素数。题目保证至少有一个素数。

// 例如给定序列： 4 5 6 2 3，最大素数为：5
// 给定序列： 6 7 3 4 5 ， 最大素数为：7
// 给定序列： 68 71 99 12 19 23 35 ， 最大素数为： 71
// 给定序列：14 5 69 51 89 31， 最大素数为：89

// 格式
// 输入格式
// 输入为两行。第一行是一个正整数n，表示有多少个数据。第二行是n个正整数组成的序列，数据中间以空格分隔。

// 输出格式
// 输出一个正整数，是上述序列中最大的那个素数。

// 样例
// 输入样例
// 9
// 6668 7703 9137 3056 7953 1734 1600 1667 1909
// 输出样例
// 9137
