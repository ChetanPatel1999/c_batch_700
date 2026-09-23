// strcpy() :-  its copy one string type variable data in another string.
#include <stdio.h>
#include <string.h>
void main()
{
    char name1[50];
    char name2[50];
    printf("enter string1 : ");
    gets(name1);
    strcpy(name2, name1);
    printf("string1 = %s\n", name1);
    printf("string2 = %s\n", name2);

    // char name[20];
    // strcpy(name, "ram");
    // printf("string = %s\n", name);
}