#include <stdio.h>
#include <string.h>



int main() {
    char str[200];
    int appeared[128] = {0};
    gets(str);

    int length = strlen(str);//长度
    int uniqueCount = 0;

    for (int i = 0; str[i]!='\0'; i++) {
        appeared[str[i]]++;
    }//遍历一遍

    for (int i = 0;str[i]!='\0'; i++) {
        if (appeared[str[i]] == 1) {
            str[uniqueCount] = str[i];
            uniqueCount++;
        }
    }

    if (uniqueCount == 0) {
        printf("none");
    } else {
        str[uniqueCount] = '\0';
        printf("%s", str);
    }

    return 0;
}
// 删除重复字符 【C/C++/Java/Python】
// 描述
// 给定一个字符串，其长度不超过100，
//将其中重复出现的字符全部删除，只留下不重复的字符，将剩余字符按照原来的顺序输出，如果没有不重复的字符，应输出“none"
// 例如，有字符串：replace，去重后应输出：rplac
// 又比如，有字符串：maketrans，去重后应输出：mketrns
// 例如字符串：abcabc，应输出：none
// 其中的字母是区分大小写的，即大写字母’A’不等于小写字母’a’

// 格式
// 输入格式
// 一行，一个英文字符串

// 输出格式
// 一行，删除重复字符后剩余的字符

// 样例
// 输入样例
// center
// 输出样例
// cntr