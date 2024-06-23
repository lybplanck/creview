#include<stdio.h>
int getLengthOfInt(int n){
    int sum=0;
    while(n!=0)
    {
        int s=n%10;
        n=(n-s)/10;
        sum++;
    }
    return sum;

}

void setArray(int* array, int n, int sum){
    int i = 0;
    while(n!=0)
    {
        int s=n%10;
        array[sum-i-1]=s;
        n=(n-s)/10;
        i++;
    }
}

int main()
{
    int n = 3546325;
    // scanf("%d",&n);
    
    int sum = getLengthOfInt(n);
    int a[sum];
    setArray(a, n, sum);
    for(int i = 0; i<sum; i++){
        printf("%d ",a[i]);
    }
}
// 分离整数的各个数
// 描述
// 给定一个整数n(1≤n≤100000000)，要求从个位开始分离出它的每一位数字。从个位开始按照从低位到高位的顺序依次输出每一位数字。

// 格式
// 输入格式
// 输入一个整数，整数在1到100000000之间

// 输出格式
// 从个位开始按照从低位到高位的顺序依次输出每一位数字。数字之间以一个空格分开

// 样例
// 输入样例
// 123
// 输出样例
// 3 2 1