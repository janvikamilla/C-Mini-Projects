#include <stdio.h>

int main()
{
    int choice;
    int completed = 0;

    do
    {
        printf("\n===== ROBOT MISSION MANAGER =====\n");

        printf("1. Navigation Mission\n");
        printf("2. Object Detection\n");
        printf("3. Pick and Place\n");
        printf("4. Battery Check\n");
        printf("5. Mission Report\n");
        printf("6. Shutdown Robot\n");

        printf("\nEnter Mission: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Navigation Mission Started!\n");
                printf("Robot Reached Destination!\n");
                completed++;
                break;

            case 2:
                printf("Object Detection Started!\n");
                printf("Object Detected Successfully!\n");
                completed++;
                break;

            case 3:
                printf("Pick and Place Started!\n");
                printf("Object Picked and Placed!\n");
                completed++;
                break;

            case 4:
                printf("Battery Level: 85%%\n");
                printf("Battery Status: Normal\n");
                break;

            case 5:
                printf("\n===== MISSION REPORT =====\n");
                printf("Completed Missions: %d\n", completed);
                printf("Robot Status: Operational\n");
                break;

            case 6:
                printf("Robot Shutting Down...\n");
                break;

            default:
                printf("Invalid Mission!\n");
        }

    } while(choice != 6);

    return 0;
}
