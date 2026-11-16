#include <stdio.h>

int main()
{
    char name[10][30];
    int quantity[10], n, i;
    float price[10], total = 0, discount, finalBill;

    printf("Enter number of products: ");
    scanf("%d", &n);

    if(n < 1 || n > 10)
    {
        printf("Invalid number of products!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter Product Name: ");
        scanf(" %[^\n]", name[i]);

        printf("Enter Price: ");
        scanf("%f", &price[i]);

        printf("Enter Quantity: ");
        scanf("%d", &quantity[i]);

        if(price[i] < 0 || quantity[i] < 0)
        {
            printf("Invalid Product Details!");
            return 0;
        }

        total += price[i] * quantity[i];
    }

    if(total >= 5000)
        discount = total * 0.10;
    else if(total >= 2000)
        discount = total * 0.05;
    else
        discount = 0;

    finalBill = total - discount;

    printf("\n========== SHOPPING BILL ==========\n");

    for(i = 0; i < n; i++)
    {
        printf("\nProduct: %s", name[i]);
        printf("\nPrice: Rs. %.2f", price[i]);
        printf("\nQuantity: %d", quantity[i]);
        printf("\nAmount: Rs. %.2f\n",
               price[i] * quantity[i]);
    }

    printf("\nTotal Amount: Rs. %.2f", total);
    printf("\nDiscount: Rs. %.2f", discount);
    printf("\nFinal Bill: Rs. %.2f\n", finalBill);

    printf("\nThank You For Shopping!");

    return 0;
}
