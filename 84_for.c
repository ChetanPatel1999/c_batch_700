//  Write a program to display factors of given number.
#include <stdio.h>
void main()
{
    int i, num;
    printf("enter a num : ");
    scanf("%d", &num); // 12
    printf("factors of %d = ", num);
    for (i = 1; i <= num; i++) // 8
    {
        if (num % i == 0)
        {
            printf("%d ", i);
        }
    }
}