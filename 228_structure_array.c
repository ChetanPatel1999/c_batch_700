#include <stdio.h>
struct pen
{
    char cname[20];
    int price;
    float rating;
};
void main()
{
    struct pen p[5];
    int i;

    for (i = 0; i < 5; i++) // 1
    {
        printf("\nenter pen%d info : \n", i + 1);
        printf("enter cname : ");
        scanf("%s", p[i].cname);
        printf("enter price : ");
        scanf("%d", &p[i].price);
        printf("enter rating : ");
        scanf("%f", &p[i].rating);
    }

    for (i = 0; i < 5; i++)
    {
        printf("\npen%d info \n", i + 1);
        printf("cname : %s\n", p[i].cname);
        printf("price : %d\n", p[i].price);
        printf("rating : %.1f\n", p[i].rating);
        printf("----------------------\n");
    }
}