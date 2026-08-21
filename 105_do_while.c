#include <stdio.h>
void main()
{
    int p, num, sum = 0;
    do
    {  
        printf("enter a num : ");
        scanf("%d", &num); // 100
        sum = sum + num;   // 160
        printf("you want to add more number press 1:");
        scanf("%d", &p); // 4
    } while (p == 1);

    printf("total sum = %d\n", sum);
    printf("thanks for using my calculator");
}