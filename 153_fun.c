#include <stdio.h>
void square() // function defination
{
    int num, s;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    s = num * num;
    printf("sqaure = %d\n", s);
}
void cube() // function defination
{
    int num, s;
    printf("enter a num : ");
    scanf("%d", &num); // 6
    s = num * num * num;
    printf("cube = %d\n", s);
}
void main()
{
    cube();
    square(); // function calling
    square();
}
