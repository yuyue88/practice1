#include <stdio.h>
#include <string.h>

int main() {
    char str[100], s[100];
    int i, len;
    printf("������һ���ַ�����");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++) {
        s[i] = str[i];
    }
    s[i] = '\0';
    printf("���ƺ���ַ���Ϊ��%s\n", s);
    return 0;
}
