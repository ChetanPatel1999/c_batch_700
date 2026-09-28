#include <stdio.h>
#include <string.h>
struct pen
{
    char cname[20];
    int price;
    float rating;
};
void main()
{
    struct pen p1, p2, p3;
    strcpy(p1.cname, "cello");
    p1.price = 5;
    p1.rating = 3.8;

    strcpy(p2.cname, "ox");
    p2.price = 10;
    p2.rating = 4.2;

    printf("pen 1 info \n");
    printf("cname : %s\n", p1.cname);
    printf("price : %d\n", p1.price);
    printf("rating : %.1f\n", p1.rating);

    printf("----------------------\n");
    printf("pen 2 info \n");
    printf("cname : %s\n", p2.cname);
    printf("price : %d\n", p2.price);
    printf("rating : %.1f\n", p2.rating);
}