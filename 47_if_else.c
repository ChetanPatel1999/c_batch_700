// Write a program to check whether a character is an uppercase  so convert in lower
// case or lowercase so convert in uppercase char .
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha);
    if (alpha >= 'a' && alpha <= 'z')
    {
        alpha = alpha - 32;
        printf("upercase : %c", alpha);
    }
    else
    {
        alpha = alpha + 32;
        printf("lowercase : %c", alpha);
    }
}