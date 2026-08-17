//  Write a program to display lowercase alphabet a to z.
#include <stdio.h>
void main()
{
    char i;
    for (i = 'a'; i <= 'z'; i++) // 98
    {
        printf("%c ", i);
    }

    printf("\n");

    for (i = 'A'; i <='Z'; i++) // 98
    {
        printf("%c ", i);
    }
}