#include <stdio.h>
#include <string.h>
struct pen
{
    char cname[12]; // 12 byte
    int price;      // 4 byte
    float rating;   // 4 byte
};
void main()
{
    struct pen p1;
    printf("size of struct = %d\n", sizeof(p1));
    strcpy(p1.cname, "cello");
    p1.price = 5;
    p1.rating = 3.8;

    printf("pen 1 info \n");
    printf("cname : %s\n", p1.cname);
    printf("price : %d\n", p1.price);
    printf("rating : %.1f\n", p1.rating);
}