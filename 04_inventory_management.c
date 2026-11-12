#include <stdio.h>

struct Product
{
    int id;
    char name[40];
    int quantity;
};

int main()
{
    struct Product p[50];
    int choice, count = 0, i, id, found, extra;

    do
    {
        printf("\n===== INVENTORY SYSTEM =====\n");
        printf("1. Add Product\n");
        printf("2. Display Products\n");
        printf("3. Update Stock\n");
        printf("4. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    printf("Enter Product ID: ");
                    scanf("%d", &p[count].id);

                    printf("Enter Product Name: ");
                    scanf(" %[^\n]", p[count].name);

                    printf("Enter Quantity: ");
                    scanf("%d", &p[count].quantity);

                    if(p[count].quantity < 0)
                    {
                        printf("Invalid Quantity!\n");
                        break;
                    }

                    count++;
                    printf("Product Added!\n");
                }
                else
                    printf("Storage Full!\n");
                break;

            case 2:
                for(i = 0; i < count; i++)
                {
                    printf("\nID: %d", p[i].id);
                    printf("\nProduct: %s", p[i].name);
                    printf("\nQuantity: %d\n", p[i].quantity);
                }
                break;

            case 3:
                printf("Enter Product ID: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(p[i].id == id)
                    {
                        printf("Enter quantity to add: ");
                        scanf("%d", &extra);

                        if(extra > 0)
                        {
                            p[i].quantity += extra;
                            printf("Stock Updated!\n");
                        }
                        else
                            printf("Invalid Quantity!\n");

                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Product Not Found!\n");
                break;

            case 4:
                printf("Exiting Inventory...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
