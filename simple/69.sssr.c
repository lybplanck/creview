#include <stdio.h>
#include <string.h>

void reverseString(char str[]) {
    int start = 0;
    int end = strlen(str) - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    int n;
    scanf("%d", &n);

    char str[15];
    sprintf(str, "%d", n);

    int len = strlen(str);
    int mid = len / 2;

    char left[15], right[15];
    strncpy(left, str, mid); 
    left[mid] = '\0'; 
    strcpy(right, str + mid); 

    reverseString(right); 

    int leftNum = atoi(left); 
    int rightNum = atoi(right); 

    int sum = leftNum + rightNum;
    printf("%d\n", sum);

    return 0;
}
// 数字折叠相加（一）【C/C++/Java/Python】
// 描述
// 将一个数字n（10≤n≤1,000,000,000）拆成左右两部分，将右边的数字逆转后与左边的数字相加，输出和值。

// 比如：123456，拆成123+654=777
// 比如：147369，拆成 147+963=1110

// 如果数字的位数是奇数，则左半部分应比右半部少一位

// 比如：12345，拆成：12+543=555
// 比如：15950，拆成：15+059=74

// 格式
// 输入格式
// 一个正整数n，10≤n≤1,000,000,000

// 输出格式
// 一个正整数，按照要求求得的结果

// 样例
// 输入样例
// 15874
// 输出样例
// 493