#include <stdio.h>
void main()
{
    // what is output of this code ?
    int i, j;
    for (i = 1; i <= 5; i++) //2
    {
        for (j = i; j <= 5; j++) // 3
        {
            printf("* "); //
        }
        printf("\n");
    }
}
