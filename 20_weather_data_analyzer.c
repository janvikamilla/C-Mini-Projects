#include <stdio.h>

float calculateAverage(float temp[], int n)
{
    float total = 0;
    int i;

    for(i = 0; i < n; i++)
    {
        total += temp[i];
    }

    return total / n;
}

int main()
{
    float temperature[7];
    float average, highest, lowest;
    int i;

    printf("===== WEATHER DATA ANALYZER =====\n");

    for(i = 0; i < 7; i++)
    {
        printf("Enter temperature of Day %d: ", i + 1);
        scanf("%f", &temperature[i]);
    }

    highest = temperature[0];
    lowest = temperature[0];

    for(i = 1; i < 7; i++)
    {
        if(temperature[i] > highest)
            highest = temperature[i];

        if(temperature[i] < lowest)
            lowest = temperature[i];
    }

    average = calculateAverage(temperature, 7);

    printf("\n===== WEATHER REPORT =====\n");

    printf("Average Temperature: %.2f C\n", average);
    printf("Highest Temperature: %.2f C\n", highest);
    printf("Lowest Temperature: %.2f C\n", lowest);

    return 0;
}
