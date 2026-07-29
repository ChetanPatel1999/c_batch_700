// write a program to take two number from user and
// check both number are same or different.
#include <stdio.h>
void main()
{
    int a, b;
    printf("enter value of a = ");
    scanf("%d", &a);
    printf("enter value of b = ");
    scanf("%d", &b);

    a == b ? printf("number is same") : printf("number is different");
}