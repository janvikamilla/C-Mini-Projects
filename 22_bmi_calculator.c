#include <stdio.h>

int main()
{
    float weight, height, bmi;

    printf("===== BMI CALCULATOR =====\n");

    printf("Enter your weight (kg): ");
    scanf("%f", &weight);

    printf("Enter your height (meters): ");
    scanf("%f", &height);

    if(weight <= 0 || height <= 0)
    {
        printf("Invalid input!\n");
        return 0;
    }

    bmi = weight / (height * height);

    printf("\nYour BMI is: %.2f\n", bmi);

    if(bmi < 18.5)
    {
        printf("Category: Underweight\n");
    }
    else if(bmi < 25)
    {
        printf("Category: Normal Weight\n");
    }
    else if(bmi < 30)
    {
        printf("Category: Overweight\n");
    }
    else
    {
        printf("Category: Obesity Range\n");
    }

    return 0;
}
