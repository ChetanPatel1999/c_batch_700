//
#include <stdio.h>
void main()
{
    int i = 1, num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 436
start:
    rem = num % 10;  // 4
    sum = sum + rem; // 13
    num = num / 10;
    if (num > 0)
    {
        goto start;
    }

    printf("sum of individula digit = %d", sum);
}