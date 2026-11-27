#include <stdio.h>

int main()
{
    int slots[5] = {0, 0, 0, 0, 0};
    int choice, slot, i;

    do
    {
        printf("\n===== SMART PARKING SYSTEM =====\n");
        printf("1. Park Vehicle\n");
        printf("2. Remove Vehicle\n");
        printf("3. View Parking Slots\n");
        printf("4. Exit\n");

        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter Slot Number (1-5): ");
                scanf("%d", &slot);

                if(slot < 1 || slot > 5)
                    printf("Invalid Slot!\n");
                else if(slots[slot - 1] == 1)
                    printf("Slot Already Occupied!\n");
                else
                {
                    slots[slot - 1] = 1;
                    printf("Vehicle Parked Successfully!\n");
                }
                break;

            case 2:
                printf("Enter Slot Number (1-5): ");
                scanf("%d", &slot);

                if(slot < 1 || slot > 5)
                    printf("Invalid Slot!\n");
                else if(slots[slot - 1] == 0)
                    printf("Slot Already Empty!\n");
                else
                {
                    slots[slot - 1] = 0;
                    printf("Vehicle Removed!\n");
                }
                break;

            case 3:
                for(i = 0; i < 5; i++)
                {
                    printf("Slot %d: ", i + 1);

                    if(slots[i] == 1)
                        printf("Occupied\n");
                    else
                        printf("Available\n");
                }
                break;

            case 4:
                printf("System Closed!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
