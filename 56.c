#include<stdio.h>
#include<math.h>
int sushu(int b)
{
    int end;
    if(b<2)
    {
        return 0;
    }
    end=sqrt(b);
    for(int i=2;i<=end;i++)
    {
        if(b%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int check(int a)
{
    if(a%3==1&&a%7==2&&a%11==3)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int m,n,cnt=0;
    scanf("%d%d",&m,&n);
    for(int i=m;i<=n;i++)
    {
        if(check(i)&&sushu(i))
        {
            printf("%d",i);
            cnt++;
        }
          if(cnt==1)break;//值得注意：循环仅输出最小结果用这种方法
          
    
   
    }
     if(cnt==0)printf("none");
      
    
   
    
     
    
}
// 查找指定数据（一）【C/C++/Java/Python】
// 描述
// 查找在[m,n]范围内是否有同时满足下列条件的正整数：

// （1）对3取余等于1，对7取余等于2，对11取余等于3
// （2）是一个素数

// 例如区间【700, 800】内有751满足条件。区间【1200,1300】内有1213满足条件，区间【2100，2200】内有2137满足条件。
// 如果一个区间内有多个数据满足条件，输出最小的那个。如果没有任何数据满足条件，输出“none”

// 格式
// 输入格式
// 两个正整数m和n，表示闭区间[m,n]，题目保证：1≤m≤n≤100,000,000，两个数据之间用空格隔开

// 输出格式
// 一行。如果找到满足题目要求的数据，则输出这个数；如果有多个数据，输出其中最小的那个。如果一个数据都没有，输出“none”

// 样例
// 输入样例
// 3000   4000
// 输出样例
// 3061