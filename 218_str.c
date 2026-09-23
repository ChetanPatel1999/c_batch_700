// strlen() :- its return string length
#include <stdio.h>
#include <string.h>
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name); // ram
    printf("string = %s\n", name);
    int res = strlen(name);
    printf("string length = %d", res);
}