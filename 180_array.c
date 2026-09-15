//wap to print sum of all element of array.
#include <stdio.h>
void main()
{
    int ages[5] = {23, 56, 44, 76, 45};
    int i;
    printf("array element are : \n");
    for (i = 0; i < 5; i++) // 5
    {
        printf("%d ", ages[i]);
    }
     
    
    int sum = 0;
    for (i = 0; i < 5; i++) // 5
    {
        sum = sum + ages[i]; // 244
    }

    printf("\nsum of all ages = %d", sum);
}