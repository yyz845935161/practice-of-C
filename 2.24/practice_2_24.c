#define _CRT_SECURE_NO_WARNINGS 1
//BoBo写了一个十六进制整数ABCDEF，他问KiKi对应的十进制整数是多少。
//#include <stdio.h>
//
//int main()
//{
//    printf("%15d", 0xABCDEF);
//}

#include <stdio.h>

int main()
{
    char ch = 0;
    while ((ch = getchar()) != EOF)
    {

        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))printf("YES\n");
        else printf("NO\n");
        getchar();
    }
    return 0;
}