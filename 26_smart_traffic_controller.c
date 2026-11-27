#include <stdio.h>

void trafficSignal(int vehicles)
{
    printf("\n===== TRAFFIC SIGNAL SYSTEM =====\n");

    if(vehicles >= 20)
    {
        printf("Traffic Density: HIGH\n");
        printf("Green Signal: 60 Seconds\n");
    }
    else if(vehicles >= 10)
    {
        printf("Traffic Density: MEDIUM\n");
        printf("Green Signal: 40 Seconds\n");
    }
    else
    {
        printf("Traffic Density: LOW\n");
        printf("Green Signal: 20 Seconds\n");
    }
}

int main()
{
    int vehicles[3];

    printf("SMART TRAFFIC CONTROLLER\n");

    for(int i = 0; i < 3; i++)
    {
        printf("Enter vehicles on Road %d: ", i + 1);
        scanf("%d", &vehicles[i]);

        if(vehicles[i] < 0)
        {
            printf("Invalid vehicle count!\n");
            return 0;
        }
    }

    for(int i = 0; i < 3; i++)
    {
        printf("\nRoad %d:", i + 1);
        trafficSignal(vehicles[i]);
    }

    return 0;
}
