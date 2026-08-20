//. Write a program that takes a number as input and displays its digits in
// reverse order as a new number.
#include <stdio.h>
void main()
{
    int num, rem, reverse = 0;
    printf("enter a num : ");
    scanf("%d", &num); 
    while (num > 0)
    {
        rem = num % 10;               
        reverse = reverse * 10 + rem; 
        num = num / 10;
    }
    printf("reverse number = %d", reverse); 
}