// strupr():- convert  string in uper case
// strlwr() :-  convert string in lower case
#include <stdio.h>
#include <string.h>
void main()
{
    char name[50];
    printf("enter string : ");
    gets(name); // ram
    printf("string = %s\n", name);
    // strupr(name);
    strlwr(name);
    printf("uper case string = %s\n", name);
}