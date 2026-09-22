// how to take string input from user.
#include <stdio.h>
void main()
{
    char name[20];
    printf("enter name = ");
    scanf("%[^\n]s", name); // take multiple word from user
    printf("name = %s\n", name);
}