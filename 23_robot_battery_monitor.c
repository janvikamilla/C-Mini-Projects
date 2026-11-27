#include <stdio.h>

int main()
{
    int battery;

    printf("===== ROBOT BATTERY MONITOR =====\n");

    printf("Enter Battery Percentage: ");
    scanf("%d", &battery);

    printf("\n===== BATTERY STATUS =====\n");

    if(battery > 100 || battery < 0)
    {
        printf("Invalid Battery Reading!\n");
    }
    else if(battery >= 70)
    {
        printf("Battery Status: FULL\n");
        printf("Robot is Ready to Work!\n");
    }
    else if(battery >= 40)
    {
        printf("Battery Status: NORMAL\n");
        printf("Robot Can Continue Working.\n");
    }
    else if(battery >= 15)
    {
        printf("Battery Status: LOW\n");
        printf("Recharge Soon!\n");
    }
    else
    {
        printf("Battery Status: CRITICAL\n");
        printf("Robot Must Stop and Recharge!\n");
    }

    return 0;
}
