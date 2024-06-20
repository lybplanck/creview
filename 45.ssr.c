#include<stdio.h>
int main()
{
    int a[5][5];
    int min,ai,aj;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(i==0,j==0)
            {
                min=a[i][j];
                ai=i;
                aj=j;
            }
            if(min>a[i][j])
            {
                min=a[i][j];
                ai=i;
                aj=j;
            }
        }
    }
    printf("%d %d %d",ai,aj,min);
    return 0;
}
// 矩阵中的最小元素 【C/C++/Java/Python】
// 描述
// 给定一个5X5的整数矩阵，找出其中最小的元素，输出所在的行号、列号和元素值，其中行号和列号都从0开始。
// 例如，有矩阵：
// 5 86 53 50 18
// 25 67 79 44 68
// 79 63 24 84 100
// 42 30 59 47 37
// 28 10 32 23 81
// 其中最小元素的行号和列号都是0，值是5

// 格式
// 输入格式
// 一个5X5的矩阵，数据之间用空格隔开

// 输出格式
// 一行，依次输出最小元素所在的行号、列号和值，中间以空格分隔

// 样例
// 输入样例
// 96 81 40 67 48 
// 46 98 65 92 13 
// 68 20 25 47 81 
// 49 78 73 13 44 
// 1   2  79  96 97 
// 输出样例
// 4  0  1