#include <stdio.h>

int main()
{
    int level;

    printf("===== WATER TANK CONTROLLER =====\n");

    printf("Enter Water Level (0-100): ");
    scanf("%d", &level);

    if(level < 0 || level > 100)
    {
        printf("Invalid Water Level!\n");
    }
    else
    {
        printf("\nWater Level: %d%%\n", level);

        if(level <= 20)
        {
            printf("Water Level: LOW\n");
            printf("Motor Status: ON\n");
            printf("Action: Filling Tank...\n");
        }
        else if(level < 90)
        {
            printf("Water Level: NORMAL\n");
            printf("Motor Status: OFF\n");
        }
        else
        {
            printf("Water Level: FULL\n");
            printf("Motor Status: OFF\n");
            printf("Alert: Tank is Almost Full!\n");
        }
    }

    return 0;
}
