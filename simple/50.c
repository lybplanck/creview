#include<stdio.h>
#include <string.h>
int main()
{
    char a[100000];
    gets(a);
    int cnt=0;
    
    for(int i=0;a[i]!='\n';i++)//值得注意范围写法
    //遇到空格就记一次数-----单词数=空格数+1;for(int i=0;a[i]!='\n';i++)
    {
        if(a[i]==' ')
        {
            cnt++;
        }
    }
     printf("%d",cnt+1);
    return 0;
}