#include <stdio.h>
void main()
{
    char name[7] = "indore";
    int i;
    for (i = 0; i < 6; i++)//1
    {
        printf("%c ", name[i]);
    }
}