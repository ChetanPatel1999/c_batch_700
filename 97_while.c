//   Write a program that takes a number as input and counts how many digits
// it contains.
#include <stdio.h>
void main()
{
    int num, rem, c = 0;
    printf("enter a num : ");
    scanf("%d", &num); // 56
    while (num > 0)
    {
        c++;            
        num = num / 10; 
    }
    printf("total digit count of number = %d", c);
}