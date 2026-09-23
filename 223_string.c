// strcmp(s1,s2) :- if  both string are same so its return 0 or both 
//string are different its return 1.

#include <stdio.h>
void main()
{
    char name1[50];
    char name2[50];
    printf("enter string1 : ");
    gets(name1); // ram
    printf("enter string2 : ");
    gets(name2); // ram

    if (strcmp(name1, name2) == 0)
    {
        printf("string are same");
    }
    else
    {
        printf("string are different");
    }
}