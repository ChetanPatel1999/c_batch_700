//  Write a program to display average 1 to n ( given number).
#include <stdio.h>
void main()
{
    int i, n;
    printf("enter a number = ");
    scanf("%d", &n); // 5
    int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("sum of 1 to %d = %.1f\n", n, sum / (float)n);
}