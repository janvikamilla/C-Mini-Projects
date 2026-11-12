#include <stdio.h>

struct Book
{
    int id;
    char title[50];
};

int main()
{
    struct Book b[50];
    int choice, count = 0, i, search, found;

    do
    {
        printf("\n===== LIBRARY MANAGEMENT =====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    printf("Enter Book ID: ");
                    scanf("%d", &b[count].id);

                    printf("Enter Book Title: ");
                    scanf(" %[^\n]", b[count].title);

                    count++;
                    printf("Book Added Successfully!\n");
                }
                else
                    printf("Library Storage Full!\n");
                break;

            case 2:
                for(i = 0; i < count; i++)
                {
                    printf("\nBook ID: %d", b[i].id);
                    printf("\nBook Title: %s\n", b[i].title);
                }
                break;

            case 3:
                printf("Enter Book ID: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(b[i].id == search)
                    {
                        printf("Book Found: %s\n", b[i].title);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Book Not Found!\n");
                break;

            case 4:
                printf("Exiting Library...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
