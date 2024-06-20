#include<stdio.h>
#include <string.h>
int isPalindrome(int num) {
    char str[20]; 
    sprintf(str, "%d", num); 
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0; 
        }
    }
    return 1; 
}
// int huiwen(int n)//值得注意；回文数
// {
//     // int c;
//     // while(n!=1)
//     // {
//     //     c=n%10;
//     //     printf("%d",c);
//     //     n=(n-c)/10;
//     //     cnt++;
//     // }
// }
int main() {
    int n;
    scanf("%d", &n);

    if (isPalindrome(n)) {
        printf("Y\n");
    } else {
        printf("N\n");
    }

    return 0;
}
// 回文数判断 【C/C++/Java/Python】
// 描述
// 回文数是一种特殊的数，从左边读和从右边读是一样的，比如123321就是一个回文数。
//给定一个正整数n（n≤100,000,000），编程判断该数是否为回文数。如果是回文数，输出“Y"，否则输出"N"。
// 例如n=987789时，应输出"Y"，当n=1233210时，应输出"N"

// 格式
// 输入格式
// 一个正整数n

// 输出格式
// 一个大写字符，Y或者N

// 样例
// 输入样例
// 1314520
// 输出样例
// N