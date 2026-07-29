// write a program to check given number is less then 500 or greater then 500.
#include <stdio.h>
void main()
{
    int num;
    printf("enter a num : ");
    scanf("%d", &num);//500

    num >= 500 ? printf("num is greater then 500") : printf("num is less then 500");
}