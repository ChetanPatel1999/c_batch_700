#include <stdio.h>
void main()
{
    int i;
    for (i = 1; i <= 10; i++) //8
    {
        if (i == 3 || i == 7)
        {
            continue;
        }
        printf("%d \n", i);
    }
}