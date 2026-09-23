//  strcat(name1, name2):- its used to combine two string
#include <stdio.h>
#include <string.h>
void main()
{
    char name1[50];
    char name2[50];
    printf("enter string1 : ");
    gets(name1); // ram
    printf("enter string2 : ");
    gets(name2); // patel
    printf("string1 = %s\n", name1);
    printf("string2 = %s\n", name2);

    strcat(name1, name2);

    printf("string1 = %s\n", name1);
    printf("string2 = %s\n", name2);
}