#include <stdio.h>

int main()
{
    int choice;
    float value, result;

    do
    {
        printf("\n===== UNIT CONVERTER =====\n");
        printf("1. Kilometers to Meters\n");
        printf("2. Meters to Kilometers\n");
        printf("3. Kilograms to Grams\n");
        printf("4. Celsius to Fahrenheit\n");
        printf("5. Fahrenheit to Celsius\n");
        printf("6. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        if(choice >= 1 && choice <= 5)
        {
            printf("Enter value: ");
            scanf("%f", &value);

            switch(choice)
            {
                case 1:
                    result = value * 1000;
                    printf("Meters = %.2f\n", result);
                    break;

                case 2:
                    result = value / 1000;
                    printf("Kilometers = %.3f\n", result);
                    break;

                case 3:
                    result = value * 1000;
                    printf("Grams = %.2f\n", result);
                    break;

                case 4:
                    result = (value * 9 / 5) + 32;
                    printf("Fahrenheit = %.2f\n", result);
                    break;

                case 5:
                    result = (value - 32) * 5 / 9;
                    printf("Celsius = %.2f\n", result);
                    break;
            }
        }
        else if(choice == 6)
            printf("Converter Closed!\n");
        else
            printf("Invalid Choice!\n");

    } while(choice != 6);

    return 0;
}
