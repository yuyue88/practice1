#include<stdio.h>
int main()
{
    char ch;
    printf("������һ���ַ���\n");
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
        printf("����Ĳ��Ǵ�д����Сд��ĸ\n");
    }
    return 0;
}
 
 
