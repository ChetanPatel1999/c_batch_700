// warite a program to count vovel in given string.
#include <stdio.h>
void main()
{
    char name[] = "indore is a clean city";
    int i, c = 0;
    for (i = 0; name[i] != '\0'; i++) // 1
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
        {
            c++;
        }
    }

    printf("total vovels = %d", c);
}