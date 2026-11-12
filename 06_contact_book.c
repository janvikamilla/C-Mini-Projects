#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
};

int main()
{
    struct Contact c[50];
    int choice, count = 0, i, found;
    char search[50];

    do
    {
        printf("\n===== CONTACT BOOK =====\n");
        printf("1. Add Contact\n");
        printf("2. Display Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    printf("Enter Name: ");
                    scanf(" %[^\n]", c[count].name);

                    printf("Enter Phone Number: ");
                    scanf("%14s", c[count].phone);

                    count++;
                    printf("Contact Saved!\n");
                }
                else
                    printf("Contact Book Full!\n");
                break;

            case 2:
                for(i = 0; i < count; i++)
                {
                    printf("\nName: %s", c[i].name);
                    printf("\nPhone: %s\n", c[i].phone);
                }
                break;

            case 3:
                printf("Enter Name to Search: ");
                scanf(" %[^\n]", search);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(strcmp(c[i].name, search) == 0)
                    {
                        printf("\nContact Found!");
                        printf("\nName: %s", c[i].name);
                        printf("\nPhone: %s\n", c[i].phone);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Contact Not Found!\n");
                break;

            case 4:
                printf("Closing Contact Book...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
