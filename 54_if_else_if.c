// . Write a program to check whether a character is an alphabet, digit or special
// character.
#include <stdio.h>
void main()
{
    char character;
    printf("enter a char : ");
    scanf("%c", &character);

    if (character >= 'a' && character <= 'z' || character >= 'A' && character <= 'Z')
    {
        printf("char is alphabet");
    }
    else if (character >= '0' && character <= '9')
    {
        printf("char is digit");
    }
    else
    {
        printf("char is special character");
    }
}