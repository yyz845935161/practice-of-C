#define _CRT_SECURE_NO_WARNINGS 1
//BoBoд��һ��ʮ����������ABCDEF������KiKi��Ӧ��ʮ���������Ƕ��١�
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