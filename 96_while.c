//  Write a program to takes a number as input and calculates the sum of its
// individual digits.
#include <stdio.h>
void main()
{
    int num, rem, sum = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 327
    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem; // 12
        num = num / 10;
    }
    printf("sum of individual digiit = %d ", sum);
}