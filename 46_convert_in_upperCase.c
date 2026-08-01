// write a program which take a lowercase alphabet and convert in uppercase alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a lowercase alphabet : ");
    scanf("%c", &ch); // A

    printf("ch = %c\n", ch);

    ch = ch - 32;

    printf("uppercase ch = %c\n", ch);
}