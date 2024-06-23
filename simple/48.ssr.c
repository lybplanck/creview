#include <stdio.h>
#include <string.h>
int main() {
    char s[100001];
    int char_count[26] = {0};
    
    gets(s);
    
    for (int i = 0; s[i] != '\0'; i++) {
        char_count[s[i] - 97]++;
    }
	    
    for (int i = 0; s[i] != '\0'; i++) {
        if (char_count[s[i] - 97] == 1) {
            printf("%c", s[i]);
            return 0;
        }
    }
    
    printf("no");
    
    return 0;
}
// 找第一个只出现一次的字符
// 描述
// 给定一个只包含小写字母的字符串，请你找到第一个仅出现一次的字符。如果没有，输出no。

// 格式
// 输入格式
// 一个字符串，长度小于等于100000。

// 输出格式
// 输出第一个仅出现一次的字符，若没有则输出no。

// 样例
// 输入样例
// abcabd
// 输出样例
// c
//
// #include <stdio.h>
// int main() {
//     char str[101];
//     int count[256] = {0};
//     printf("请输入一个字符串: ");
//     fgets(str, 101, stdin); // 从标准输入读取字符串
 
//     // 统计每个字符出现的次数
//     for(int i = 0; str[i]; i++) {
//         count[str[i]]++;
//     }
 
//     // 打印只出现一次的字符
//     for(int i = 0; str[i]; i++) {
//         if(count[str[i]] == 1) {
//             printf("%c ", str[i]);
//         }
//     }
//     printf("\b \n"); // 删除末尾的空格
 
//     return 0;
// }
// 这段代码首先定义了一个字符数组str来存储用户输入的字符串，以及一个整型数组count来记录每个字符出现的次数
// 。然后通过fgets函数接收用户输入的字符串。接下来，遍历字符串中的每个字符，并将对应的计数值在count数组中增加。
// 最后，再次遍历字符串，如果某个字符的计数值为1，则输出该字符。最后的printf("\b \n")用于删除输出中的最后的空格。