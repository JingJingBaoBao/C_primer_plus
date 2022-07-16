#include <stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list od daily low temperature.\n");
    printf("Use Celsius adn enter q to quit.\n");
    while (scanf("%f", &temperature) == 1) {
        all_days++;
        if (temperature < FREEZING) {
            cold_days++;
        }
    }
    if (all_days != 0) {
        printf("%d days total, %.1f were below freezing.\n", all_days, (float) cold_days / all_days);
    }
    if (all_days == 0) {
        printf("No data entered");
    }

    return 0;
}