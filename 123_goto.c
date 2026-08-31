// wap to print a square 1 to 5.
#include <stdio.h>
void main()
{
    int i = 1, num;
    printf("enter a num : ");
    scanf("%d", &num);
start:
    printf("%d \n", num * i);
    i++;
    if (i <= 10)
    {
        goto start;
    }
}