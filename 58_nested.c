// Check whether a character is a vowel, consonant, or not an alphabet.
#include <stdio.h>
void main()
{
    char ch;
    printf("enter a char : ");
    scanf("%c", &ch); // E

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("char is vovel");
        }
        else
        {
            printf("char is consonent");
        }
    }
    else
    {
        printf("char is not alphabet");
    }
}