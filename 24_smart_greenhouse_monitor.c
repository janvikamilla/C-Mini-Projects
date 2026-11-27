#include <stdio.h>

int main()
{
    float temperature, humidity, moisture;

    printf("===== SMART GREENHOUSE SYSTEM =====\n");

    printf("Enter Temperature (C): ");
    scanf("%f", &temperature);

    printf("Enter Humidity (%%): ");
    scanf("%f", &humidity);

    printf("Enter Soil Moisture (%%): ");
    scanf("%f", &moisture);

    printf("\n===== ENVIRONMENT REPORT =====\n");

    printf("Temperature: %.1f C\n", temperature);
    printf("Humidity: %.1f%%\n", humidity);
    printf("Soil Moisture: %.1f%%\n", moisture);

    printf("\n===== SYSTEM ACTIONS =====\n");

    if(temperature > 35)
        printf("Warning: Cooling Required!\n");
    else
        printf("Temperature: Normal\n");

    if(humidity < 30)
        printf("Warning: Increase Humidity!\n");
    else
        printf("Humidity: Normal\n");

    if(moisture < 30)
        printf("Water Pump: ON\n");
    else
        printf("Water Pump: OFF\n");

    return 0;
}
