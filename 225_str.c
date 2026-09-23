// wap to print string length without using built-in function strlen()
// create your own funtcion with length name
#include <stdio.h>
int length(char name[])
{
    int i, c = 0;
    for (i = 0; name[i] != '\0'; i++) // 5
    {
        c++; // 5
    }
    return c;
}
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name); // ramji
    printf("string = %s\n", name);
    int res = length(name);
    printf("string lenth = %d ", res);
}