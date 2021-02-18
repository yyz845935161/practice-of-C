#define _CRT_SECURE_NO_WARNINGS 1


/**
 * longest common substring
 * @param str1 string×Ö·û´® the string
 * @param str2 string×Ö·û´® the string
 * @return string×Ö·û´®
 */
#include <assert.h>
char* LCS(char* str1, char* str2) {
    // write code here
    assert(str1);
    assert(str2);
    char* p1 = str1;
    char* p2 = str2;
    char* temp1 = NULL;
    char* temp2 = NULL;
    int tempMax = 0;
    while ((p1 != '/0') && (p2 != '/0'))
    {
        if (*p1 != *p2)
        {
            p1++;
            p2++;
        }
        else
        {
            temp1 = p1;
            temp2 = p2;
        }


    }


}