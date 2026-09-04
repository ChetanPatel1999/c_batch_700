#include <stdio.h>
void main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 67
    {
        for (j = 65; j <= i; j++) // 
        {
            printf("%c ", j); // A B C
        }
        printf("\n");
    }
}