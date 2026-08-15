// Write a program to display number 1 to n (given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter  a num : ");
    scanf("%d", &n); // 40
    for (i = 1; i <= n; i++) // 2
    {
        printf("%d  ", i);
    }
}