// string character visit using loops and null char
#include <stdio.h>
void main()
{
    char name[] = "indore is a clean city";
    int i;
    for (i = 0; name[i] != '\0'; i++) // 6
    {
        printf("%c ", name[i]); // i n d
    }
}