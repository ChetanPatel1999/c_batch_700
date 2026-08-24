// 10. Create a program that simulates a salary distribution system.
// 1.Take the total available salary amount at the start.
// 2.Using a do...while loop, repeatedly take input for the amount to
// distribute  to employees.
// 3.Keep subtracting the distributed amounts from the total.
// 4.Stop the process when the entire amount has been distributed or no
// more money is left.
// 5.At the end, display:
// a. The total amount distributed.
// b. The remaining balance

#include <stdio.h>
void main()
{
    int total = 20000, salary, total_distribute = 0, p;
    printf("<=== Salary Distribute App ===>\n");
    printf("  Total Amount Available : %d\n", total);
    printf("-----------------------------------\n");
    do
    {
        printf("enter employee salaray : ");
        scanf("%d", &salary);                         // 5000
        total_distribute = total_distribute + salary; // 23000
        if (total_distribute > total)
        {
            printf("\n  insufficiant amount \n");
            total_distribute = total_distribute - salary; // 18000
        }
        printf("you have more employee press 1 : ");
        scanf("%d", &p); // 7

    } while (p == 1);

    printf("-----------------------------------\n");
    printf("  total distribute amount : %d\n", total_distribute);
    printf("  total remaining amount : %d\n", total - total_distribute);
    printf("-----------------------------------\n");
    printf("     thanks for used my app \n");
}