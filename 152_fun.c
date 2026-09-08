#include <stdio.h>
void square(); // function declaration
void main()
{
    square(); // function calling
    
    square();
}
void square() // function defination
{
    int num, s;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    s = num * num;
    printf("sqaure = %d\n", s);
}
