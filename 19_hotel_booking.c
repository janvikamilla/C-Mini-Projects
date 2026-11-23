#include <stdio.h>

int rooms[10] = {0};

void displayRooms()
{
    int i;

    printf("\n===== HOTEL ROOM STATUS =====\n");

    for(i = 0; i < 10; i++)
    {
        if(rooms[i] == 0)
            printf("Room %d - Available\n", i + 1);
        else
            printf("Room %d - Booked\n", i + 1);
    }
}

void bookRoom()
{
    int room;

    printf("Enter room number (1-10): ");
    scanf("%d", &room);

    if(room < 1 || room > 10)
        printf("Invalid Room Number!\n");

    else if(rooms[room - 1] == 1)
        printf("Room Already Booked!\n");

    else
    {
        rooms[room - 1] = 1;
        printf("Room Booked Successfully!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== HOTEL BOOKING SYSTEM =====\n");
        printf("1. Display Rooms\n");
        printf("2. Book Room\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displayRooms();
                break;

            case 2:
                bookRoom();
                break;

            case 3:
                printf("Thank You!\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}
