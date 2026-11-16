#include <stdio.h>

int main()
{
    char names[50][30];
    char attendance[50];
    int n, i, present = 0;
    float percentage;

    printf("Enter number of students: ");
    scanf("%d", &n);

    if(n < 1 || n > 50)
    {
        printf("Invalid number of students!");
        return 0;
    }

    for(i = 0; i < n; i++)
    {
        printf("\nEnter student name: ");
        scanf(" %[^\n]", names[i]);

        printf("Present or Absent (P/A): ");
        scanf(" %c", &attendance[i]);

        if(attendance[i] == 'P' || attendance[i] == 'p')
            present++;
    }

    percentage = (present * 100.0) / n;

    printf("\n===== ATTENDANCE REPORT =====\n");

    for(i = 0; i < n; i++)
    {
        printf("%s : %s\n", names[i],
        (attendance[i] == 'P' || attendance[i] == 'p')
        ? "Present" : "Absent");
    }

    printf("\nPresent Students: %d", present);
    printf("\nAbsent Students: %d", n - present);
    printf("\nAttendance Percentage: %.2f%%", percentage);

    return 0;
}
