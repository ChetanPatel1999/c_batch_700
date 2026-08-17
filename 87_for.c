//  Write a program to display factors count of given number.
#include <stdio.h>
void main()
{
    int i, num, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 12
    for (i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            sum = sum + i;
        }
    }

    if (sum == num * 2)
    {
        printf("num is perfact");
    }
    else
    {
        printf("num is not perfact");
    }
}