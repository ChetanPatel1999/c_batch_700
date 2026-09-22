// gets() :- to take string from user
// pust () :-  to display string on output string
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter name = ");
    gets(name);
    // printf("name = %s\n", name);
    puts(name);
}