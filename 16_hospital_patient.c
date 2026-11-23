#include <stdio.h>

struct Patient
{
    int id;
    char name[50];
    int age;
};

int main()
{
    struct Patient p[50];
    int choice, count = 0, i;

    do
    {
        printf("\n===== HOSPITAL MANAGEMENT =====\n");
        printf("1. Add Patient\n");
        printf("2. Display Patients\n");
        printf("3. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    printf("Enter Patient ID: ");
                    scanf("%d", &p[count].id);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", p[count].name);

                    printf("Enter Age: ");
                    scanf("%d", &p[count].age);

                    count++;

                    printf("Patient Added Successfully!\n");
                }
                else
                    printf("Patient Limit Reached!\n");

                break;

            case 2:
                for(i = 0; i < count; i++)
                {
                    printf("\nID: %d", p[i].id);
                    printf("\nName: %s", p[i].name);
                    printf("\nAge: %d\n", p[i].age);
                }
                break;

            case 3:
                printf("Exiting System...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 3);

    return 0;
}
