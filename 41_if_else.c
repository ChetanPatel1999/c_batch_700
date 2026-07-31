//  Write a program to check given alphabet is vowel or consonant.
#include <stdio.h>
void main()
{
    char alpha;
    printf("enter a alphabet : ");
    scanf("%c", &alpha); // A

    if (alpha == 'e' || alpha == 'a' || alpha == 'i' || alpha == 'o' || alpha == 'u' || alpha == 'A' || alpha == 'E' || alpha == 'I' || alpha == 'O' || alpha == 'U')
    {
        printf("alphabet is vovle");
    }
    else
    {
        printf("alphabet is consonent");
    }
}