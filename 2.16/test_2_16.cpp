#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//ÇàÍÜÌøÌ¨½×
int jumpFloor(int number) {
    // write code here
//     if(number<0 || number > 20) return 0;
//     static int sum = 0;

//     if(number > 0)
//     {
//         jumpFloor(number-1);
//         jumpFloor(number-2);
//     }

//     if(number == 0) sum++;
//     return sum;
    int j[number], i;
    j[0] = 1, j[1] = 2;
    for (i = 2; i < number; i++)
        j[i] = j[i - 1] + j[i - 2];
    return j[number - 1];

}

int main()
{
    printf("%d", jumpFloor(7));
}