#include <stdio.h>
void addition()
{
    printf("this is addition app :\n");
    int a, b, c;
    printf("enter a : ");
    scanf("%d", &a);
    printf("enter b : ");
    scanf("%d", &b);
    c = a + b;
    printf("addition = %d\n", c);
}
void main()
{
    // addition();
    // addition();
    // addition();

    int i;
    for (i = 1; i <= 5; i++) // 6
    {
        addition();
    }
}