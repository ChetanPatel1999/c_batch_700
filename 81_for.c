//  Write a program to display sum 1 to n  only even number.
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a number = ");
    scanf("%d", &n); // 10
    int sum = 0;
    for (i = 1; i <= n; i++) //11
    {
        if (i % 2 == 0)
        {
            sum = sum + i; //30
        }
    }
    printf("sum of even numbers 1 to %d  = %d\n", n, sum);
}