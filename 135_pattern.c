#include <stdio.h>
void main()
{
    // what is output of this code ?
    int i, j;
    for (i = 1; i <= 5; i++) //2
    {
        for (j = 1; j <= i; j++) // 2
        {
            printf("%d ", j); //
        }
        printf("\n");
    }
}
