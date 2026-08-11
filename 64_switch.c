// Write a program using switch-case to print your friend's name based on the
// first letter of their name.

#include <stdio.h>
void main()
{
    char first_later;
    printf("enter your friend name first later : ");
    scanf("%c", &first_later);// k
    switch (first_later)
    {
        case 'b':printf("bhavana chodhary");break;
        case 'a':printf("amit koushal");break;
        case 'g':printf("gautam patidar");break;
        case 's':printf("sandeep dhakad");break;
        default:printf("you not have friend in list which name start with %c",first_later);
    }
}