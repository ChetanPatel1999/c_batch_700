//  Write a program to accept two integers and check whether they are equal or not.
#include <stdio.h>
void main()
{
    int num1, num2;
    printf("enter num1 = ");
    scanf("%d", &num1); // 15
    printf("enter num2 = ");
    scanf("%d", &num2); // 15
    if (num1 == num2)
    {
        printf("number are same");
    }
    else
    {
        printf("number are different");
    }
}