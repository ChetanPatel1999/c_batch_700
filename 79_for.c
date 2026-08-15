//  Write a program to display sum 1 to n ( given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a number = ");
    scanf("%d", &n); 
    int sum = 0;
    for (i = 1; i <= n; i++) 
    {
        sum = sum + i; 
    }
    printf("sum of 1 to %d = %d\n", n, sum);
}