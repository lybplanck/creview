#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    int a[n][m],b[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    int c[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}
// 矩阵加法
// 描述
// 输入两个n行m列的矩阵A和B，输出它们的和A+B。

// 格式
// 输入格式
// 第一行包含两个整数n和m，表示矩阵的行数和列数(1≤n≤100，1≤m≤100)。
// 接下来n行，每行m个整数，表示矩阵A的元素。
// 接下来n行，每行m个整数，表示矩阵B的元素。
// 相邻两个整数之间用单个空格隔开，每个元素均在1~1000之间。

// 输出格式
// n行，每行m个整数，表示矩阵加法的结果。相邻两个整数之间用单个空格隔开。

// 样例
// 输入样例
// 3 3
// 1 2 3
// 1 2 3
// 1 2 3
// 1 2 3
// 4 5 6
// 7 8 9
// 输出样例
// 2 4 6
// 5 7 9
// 8 10 12