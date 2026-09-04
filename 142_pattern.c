#include <stdio.h>
void main()
{
    int i, j;
    for (i = 65; i <= 69; i++) // 66
    {
        for (j = 65; j <= 69; j++)//67
        {
            printf("%c ", j); // A B C D E
        }
        printf("\n");
    }
}