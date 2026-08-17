//  Write a program to display factors count of given number.
#include <stdio.h>
void main()
{
    int i, num, c = 0;
    printf("enter a num : ");
    scanf("%d", &num);         // 15
    for (i = 1; i <= num; i++) // 16
    {
        if (num % i == 0)
        {
            c++; // 4
        }
    }
    printf("factors count of %d = %d", num, c);
}