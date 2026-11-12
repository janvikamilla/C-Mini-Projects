#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

int main()
{
    struct Student s[50];
    int choice, count = 0, i, search, found;

    do
    {
        printf("\n===== STUDENT MANAGEMENT SYSTEM =====\n");
        printf("1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Search Student\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                if(count < 50)
                {
                    printf("Enter Roll Number: ");
                    scanf("%d", &s[count].roll);

                    printf("Enter Name: ");
                    scanf(" %[^\n]", s[count].name);

                    printf("Enter Marks: ");
                    scanf("%f", &s[count].marks);

                    count++;
                    printf("Student Added Successfully!\n");
                }
                else
                {
                    printf("Student Limit Reached!\n");
                }
                break;

            case 2:
                for(i = 0; i < count; i++)
                {
                    printf("\nRoll Number: %d", s[i].roll);
                    printf("\nName: %s", s[i].name);
                    printf("\nMarks: %.2f\n", s[i].marks);
                }
                break;

            case 3:
                printf("Enter Roll Number to Search: ");
                scanf("%d", &search);

                found = 0;

                for(i = 0; i < count; i++)
                {
                    if(s[i].roll == search)
                    {
                        printf("\nStudent Found!");
                        printf("\nName: %s", s[i].name);
                        printf("\nMarks: %.2f\n", s[i].marks);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                    printf("Student Not Found!\n");

                break;

            case 4:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 4);

    return 0;
}
