#include <stdio.h>

float balance = 5000;

void deposit()
{
    float amount;

    printf("Enter deposit amount: ");
    scanf("%f", &amount);

    if(amount > 0)
    {
        balance += amount;
        printf("Amount Deposited Successfully!\n");
    }
    else
        printf("Invalid Amount!\n");
}

void withdraw()
{
    float amount;

    printf("Enter withdrawal amount: ");
    scanf("%f", &amount);

    if(amount <= 0)
        printf("Invalid Amount!\n");

    else if(amount > balance)
        printf("Insufficient Balance!\n");

    else
    {
        balance -= amount;
        printf("Withdrawal Successful!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== BANK ACCOUNT SYSTEM =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Current Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                deposit();
                break;

            case 3:
                withdraw();
                break;

            case 4:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
