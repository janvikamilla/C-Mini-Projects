#include <stdio.h>

int main()
{
    int distance[4];
    int min = 9999;

    printf("===== AUTONOMOUS ROBOT SYSTEM =====\n");

    for(int i = 0; i < 4; i++)
    {
        printf("Enter Sensor %d Distance (cm): ", i + 1);
        scanf("%d", &distance[i]);

        if(distance[i] < 0)
        {
            printf("Invalid sensor reading!\n");
            return 0;
        }

        if(distance[i] < min)
        {
            min = distance[i];
        }
    }

    printf("\n===== SENSOR ANALYSIS =====\n");

    for(int i = 0; i < 4; i++)
    {
        printf("Sensor %d: %d cm\n", i + 1, distance[i]);
    }

    printf("\nNearest Obstacle: %d cm\n", min);

    if(min <= 10)
        printf("DANGER! STOP ROBOT!\n");
    else if(min <= 30)
        printf("WARNING! SLOW DOWN!\n");
    else
        printf("PATH CLEAR! MOVE FORWARD!\n");

    return 0;
}
