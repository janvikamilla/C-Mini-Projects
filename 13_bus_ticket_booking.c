#include <stdio.h>
int main()
{
  int choice,tickets;
float fare,total;
printf(" =====BUS TICKET BOOKING SYSTEM=====\n");
printf("\nAvailable Destinations:\n");
printf("1.Pune-Rs. 100\n");
printf("2.Mumbai-Rs. 250\n");
printf("3.Nashik-Rs. 200\n");
printf("4.Nagpur-Rs. 500\n");
printf("\nEnter destination number:");
scanf("%d", &choice);
switch(choice)
{
case 1:
fare=100;
break;
case 2:
fare=250;
break;
case 3:
fare=200;
break;
case 4:
fare=500;
break;
default:
printf("Invalid Destination");
return 0;
}
printf("Enter number  of tickets:");
scanf("%d", &tickets);
if(tickets<= 0)
{
printf("Invalid Ticket Quantity!\n");
}
else
{
total=fare*tickets;
printf("\n=====BOOKING DETAILS=====\n");
printf("Ticket Price: Rs. %.2f\n",fare);
printf("Number of Tickets: %d\n",tickets);
  printf("Total Amount: Rs. %.2f\n",total);
printf("\nBooking Successful!\n");
}
return 0;
}
