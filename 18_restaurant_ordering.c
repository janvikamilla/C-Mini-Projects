#include <stdio.h>

int main()
{
    int choice, quantity;
    int total = 0;

    int prices[5] = {100, 150, 80, 120, 50};

    do
    {
        printf("\n===== RESTAURANT MENU =====\n");

        printf("1. Pizza - Rs. 100\n");
        printf("2. Burger - Rs. 150\n");
        printf("3. Sandwich - Rs. 80\n");
        printf("4. Pasta - Rs. 120\n");
        printf("5. Coffee - Rs. 50\n");
        printf("6. Generate Bill\n");
        printf("7. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter quantity: ");
            scanf("%d", &quantity);

            if(quantity > 0)
            {
                total += prices[choice - 1] * quantity;

                printf("Item Added Successfully!\n");
            }
            else
                printf("Invalid Quantity!\n");
        }

        else if(choice == 6)
        {
            printf("\n===== FINAL BILL =====\n");
            printf("Total Amount: Rs. %d\n", total);
        }

        else if(choice == 7)
        {
            printf("Thank You!\n");
        }

        else
        {
            printf("Invalid Choice!\n");
        }

    } while(choice != 7);

    return 0;
}
