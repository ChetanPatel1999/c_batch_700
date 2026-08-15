// Write a program to display table of given number. 
#include <stdio.h>
void main()
{
    int i, num;
    printf("enter a num : ");
    scanf("%d", &num); // 15
    for (i = 1; i <= 10; i++) // 4
    {
        printf("%d \n", num * i);
    }
}