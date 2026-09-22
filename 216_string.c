// fgets() :- to take string from user
// fpust () :-  to display string on output string
#include <stdio.h>
void main()
{
    char name[10];
    printf("enter name = ");
    fgets(name, 10, stdin);
    fputs(name, stdout);
}