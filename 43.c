#include<stdio.h>
int main()
{
    int a[11];
    for(int i=0;i<11;i++)
    {
        scanf("%d",&a[i]);
        if(a[1]==1)
        {
            for(int j=1;j<11;j++)
            {
                
            }
        }
        else
        {

        }
    }
    return 0;
}
// 简单排序 【C/C++/Java/Python】
// 描述
// 输入11个整数，如果第1个数为1，则将其中的第2至11个数升序排列；如果第1个数为0，则降序排列。

// 格式
// 输入格式
// 输入一行，包含11个整数，用空格符分隔。

// 输出格式
// 输出1行，包含10个顺序排列的整数，用空格符分隔。

// 样例
// 输入样例
// 1 2 3 5 7 9 1 4 8 6 10
// 输出样例
// 1 2 3 4 5 6 7 8 9 10