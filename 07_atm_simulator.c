#include <stdio.h>

int main()
{
    int pin, choice;
    float balance = 5000, amount;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if(pin != 1234)
    {
        printf("Incorrect PIN!");
        return 0;
    }

    do
    {
        printf("\n===== ATM MACHINE =====\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Balance: Rs. %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);

                if(amount > 0)
                {
                    balance += amount;
                    printf("Deposit Successful!\n");
                }
                else
                    printf("Invalid Amount!\n");
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);

                if(amount > 0 && amount <= balance)
                {
                    balance -= amount;
                    printf("Please Collect Your Cash!\n");
                }
                else
                    printf("Insufficient Balance or Invalid Amount!\n");
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
