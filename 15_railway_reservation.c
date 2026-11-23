#include <stdio.h>

int seats[10] = {0};

void displaySeats()
{
    int i;

    printf("\n===== AVAILABLE SEATS =====\n");

    for(i = 0; i < 10; i++)
    {
        if(seats[i] == 0)
            printf("Seat %d - Available\n", i + 1);
        else
            printf("Seat %d - Booked\n", i + 1);
    }
}

void bookSeat()
{
    int seat;

    printf("Enter seat number (1-10): ");
    scanf("%d", &seat);

    if(seat < 1 || seat > 10)
    {
        printf("Invalid Seat Number!\n");
    }
    else if(seats[seat - 1] == 1)
    {
        printf("Seat Already Booked!\n");
    }
    else
    {
        seats[seat - 1] = 1;
        printf("Seat Booked Successfully!\n");
    }
}

int main()
{
    int choice;

    do
    {
        printf("\n===== RAILWAY RESERVATION SYSTEM =====\n");
        printf("1. View Seats\n");
        printf("2. Book Seat\n");
        printf("3. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                displaySeats();
                break;

            case 2:
                bookSeat();
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
