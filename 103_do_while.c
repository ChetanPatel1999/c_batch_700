#include <stdio.h>
void main()
{
    int num;
    do
    {
        printf("papa please buy a bike for me !\n");
        printf("if bike not buy by  papa so pressed 1 : ");
        scanf("%d", &num); // 6
    } 
    while (num == 1);

    printf("thanks papa for bike !");

    
}