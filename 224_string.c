// wap to print string length without using built-in function strlen()
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name); // ramji
    printf("string = %s\n", name);

    int i, c = 0;
    for (i = 0; name[i] != '\0'; i++) // 5
    {
        c++; // 5
    }
    printf("string length = %d", c);
}