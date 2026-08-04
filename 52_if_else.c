// Write a program to find greatest number among has given four numbers.
#include <stdio.h>
void main()
{
    int a, b, c, d;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    printf("enter c : ");
    scanf("%d", &c);
    printf("enter d : ");
    scanf("%d", &d);

    // a=67  b=79 c=34 d=90

    if (a > b && a > c && a > d)
    {
        printf("greatest num = %d", a);
    }
    else if (b > c && b > d)
    {
        printf("greatest num = %d", b);
    }
    else if (c > d)
    {
        printf("greatest num = %d", c);
    }
    else
    {
        printf("greatest num = %d", d);
    }
}