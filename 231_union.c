#include <stdio.h>
#include <string.h>
union pen
{
    char cname[12]; // 12 byte //data member
    int price;      // 4 byte  //data member
    float rating;   // 4 byte  //data member
};
void main()
{
    union pen p1;
    printf("size of union = %d\n", sizeof(p1)); // 12
    // strcpy(p1.cname, "cello");
    // p1.price = 5;
    // p1.rating = 3.8;

    // printf("pen 1 info \n");
    // printf("cname : %s\n", p1.cname);
    // printf("price : %d\n", p1.price);
    // printf("rating : %.1f\n", p1.rating);

    strcpy(p1.cname, "cello");
    printf("cname : %s\n", p1.cname);
    p1.price = 5;
    printf("price : %d\n", p1.price);
    p1.rating = 3.8;
    printf("rating : %.1f\n", p1.rating);

    printf("pen 1 info \n");
    printf("cname : %s\n", p1.cname);
    printf("price : %d\n", p1.price);
    printf("rating : %.1f\n", p1.rating);
}