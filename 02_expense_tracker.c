#include <stdio.h>

struct Expense
{
    char category[30];
    float amount;
};

int main()
{
    struct Expense e[50];
    int choice, count = 0, i;
    float total = 0;

    do
    {
        printf("\n===== EXPENSE TRACKER =====\n");
        printf("1. Add Expense\n");
        printf("2. View Expenses\n");
        printf("3. Total Spending\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    printf("Enter category: ");
                    scanf(" %[^\n]", e[count].category);

                    printf("Enter amount: ");
                    scanf("%f", &e[count].amount);

                    if(e[count].amount < 0)
                    {
                        printf("Invalid amount!\n");
                        break;
                    }

                    count++;
                    printf("Expense Added!\n");
                }
                else
                    printf("Storage Full!\n");
                break;

            case 2:
                for(i = 0; i < count; i++)
                {
                    printf("\nCategory: %s", e[i].category);
                    printf("\nAmount: Rs. %.2f\n", e[i].amount);
                }
                break;

            case 3:
                total = 0;

                for(i = 0; i < count; i++)
                    total += e[i].amount;

                printf("Total Spending = Rs. %.2f\n", total);
                break;

            case 4:
                printf("Exiting Tracker...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
