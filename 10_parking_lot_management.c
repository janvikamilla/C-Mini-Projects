#include <stdio.h>

int main()
{
    int slots[10] = {0};
    int choice, slot, i, count = 0;

    do
    {
        printf("\n===== PARKING MANAGEMENT =====\n");
        printf("1. Park Vehicle\n");
        printf("2. Remove Vehicle\n");
        printf("3. View Parking Slots\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count == 10)
                {
                    printf("Parking Full!\n");
                    break;
                }

                printf("Enter slot number (1-10): ");
                scanf("%d", &slot);

                if(slot < 1 || slot > 10)
                    printf("Invalid Slot!\n");
                else if(slots[slot - 1] == 1)
                    printf("Slot Already Occupied!\n");
                else
                {
                    slots[slot - 1] = 1;
                    count++;
                    printf("Vehicle Parked Successfully!\n");
                }
                break;

            case 2:
                printf("Enter slot number (1-10): ");
                scanf("%d", &slot);

                if(slot < 1 || slot > 10)
                    printf("Invalid Slot!\n");
                else if(slots[slot - 1] == 0)
                    printf("Slot Already Empty!\n");
                else
                {
                    slots[slot - 1] = 0;
                    count--;
                    printf("Vehicle Removed!\n");
                }
                break;

            case 3:
                for(i = 0; i < 10; i++)
                {
                    printf("Slot %d: %s\n", i + 1,
                    slots[i] == 1 ? "Occupied" : "Available");
                }

                printf("Available Slots: %d\n", 10 - count);
                break;

            case 4:
                printf("Parking System Closed!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
