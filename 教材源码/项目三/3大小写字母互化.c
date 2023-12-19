#include<stdio.h>
int main()
{
    char ch;
    printf("请输入一个字符：\n");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        ch -= 32;
        printf("%c\n", ch);
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch += 32;
        printf("%c\n", ch);
    }
    else
    {
        printf("输入的不是大写或者小写字母\n");
    }
    return 0;
}
 
 
