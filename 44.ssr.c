#include<stdio.h>
int main()
{
    int n ,m ;
    scanf("%d%d",&n,&m);
    int a[n][m];
    int b[m][n];
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
            b[j][i]=a[i][j];
        }
    }
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
            
        }
        printf("\n");
    }
    
    //a[n+1],a[m-1]
    //a[0][1]=a[1][0]
    return 0;
}
// 矩阵转置
// 描述
// 输入一个n行m列的矩阵A，输出它的转置A^T。

// 格式
// 输入格式
// 第一行包含两个整数n和m，表示矩阵A的行数和列数(1≤n≤100，1≤m≤100)。

// 接下来n行，每行m个整数，表示矩阵A的元素。相邻两个整数之间用单个空格隔开，每个元素均在1~1000之间。

// 输出格式
// m行，每行n个整数，为矩阵A的转置。相邻两个整数之间用单个空格隔开。

// 样例
// 输入样例
// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// 输出样例
// 1 4 7
// 2 5 8
// 3 6 9