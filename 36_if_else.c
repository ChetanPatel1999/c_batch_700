//  Write a program to check given number is positive or negative.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num); // 0
    if (num >= 0)
    {
        printf("num is positive");
    }
    else
    {
        printf("num is nagative");
    }
}