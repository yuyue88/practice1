#include <stdio.h>
#include <string.h>

int main() {
    char str[100], s[100];
    int i, len;
    printf("请输入一个字符串：");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        s[i] = str[i];
    }
    s[i] = '\0';
    printf("复制后的字符串为：%s\n", s);
    return 0;
}
