//  Write a program to display factors count of given number.
#include <stdio.h>
void main()
{
    int i, num, c = 0;
    printf("enter a num : ");
    scanf("%d", &num);         // 31
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0)
        {
            c++; // 4
        }
    }
       
    if (c == 2)
    {
        printf("num is prime");
    }
    else
    {
        printf("num is not prime");
    }
}