// Write a program to display table of given number.
// 4 * 1 = 4
// 4 * 2 = 8
// 4 * 3 = 12
#include <stdio.h>
void main()
{
    int i, num;
    printf("enter a num : ");
    scanf("%d", &num);        // 15
    for (i = 1; i <= 10; i++) // 4
    {
        printf("%d * %d = %d \n", num, i, num * i);
    }
}