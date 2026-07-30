// Write a program to accept a number from user and print if it is multiple of 7 .
#include <stdio.h>
void main()
{
    int num;
    printf("enter  a num : ");
    scanf("%d", &num); // 34
    if (num % 7 == 0)
    {
        printf("num is multiple of 7");
    }
    else
    {
        printf("num is not multiple of 7");
    }
}