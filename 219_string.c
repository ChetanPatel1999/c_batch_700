// strrev():- its convert string in reverse.
#include <stdio.h>
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name); // ram
    printf("string = %s\n", name);
    strrev(name);
    printf("revesre string = %s\n", name);
}