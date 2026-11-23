
#include <stdio.h>

float calculateBill(float units)
{
    float bill = 0;

    if(units <= 100)
    {
        bill = units * 1.50;
    }
    else if(units <= 200)
    {
        bill = (100 * 1.50) +
               ((units - 100) * 2.50);
    }
    else
    {
        bill = (100 * 1.50) +
               (100 * 2.50) +
               ((units - 200) * 4.00);
    }

    return bill + 50;
}

int main()
{
    float units, totalBill;

    printf("===== ELECTRICITY BILL CALCULATOR =====\n");

    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    if(units < 0)
    {
        printf("Invalid Units!\n");
    }
    else
    {
        totalBill = calculateBill(units);

        printf("\n===== BILL DETAILS =====\n");
        printf("Units Consumed: %.2f\n", units);
        printf("Fixed Charge: Rs. 50.00\n");
        printf("Total Electricity Bill: Rs. %.2f\n",
               totalBill);
    }

    return 0;
}
