#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basic, allowance, deduction, net;
};

int main()
{
    struct Employee e[20];
    int n, i;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    if(n < 1 || n > 20)
    {
        printf("Invalid number of employees!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Employee ID: ");
        scanf("%d", &e[i].id);

        printf("Enter Employee Name: ");
        scanf(" %[^\n]", e[i].name);

        printf("Enter Basic Salary: ");
        scanf("%f", &e[i].basic);

        printf("Enter Allowance: ");
        scanf("%f", &e[i].allowance);

        printf("Enter Deduction: ");
        scanf("%f", &e[i].deduction);

        if(e[i].basic < 0 || e[i].allowance < 0 ||
           e[i].deduction < 0 ||
           e[i].deduction > e[i].basic + e[i].allowance)
        {
            printf("Invalid salary details!\n");
            return 0;
        }

        e[i].net = e[i].basic + e[i].allowance
                   - e[i].deduction;
    }

    printf("\n===== EMPLOYEE PAYROLL =====\n");

    for(i = 0; i < n; i++)
    {
        printf("\nEmployee ID: %d", e[i].id);
        printf("\nName: %s", e[i].name);
        printf("\nNet Salary: Rs. %.2f\n", e[i].net);
    }

    return 0;
}
