#include <stdio.h>
#define PI 3.1415926

int main(void)
{
    float area, circum, radius;
    printf("What's the radius of yout pizza? ");
    scanf("%f", &radius);
    circum = 2 * PI * radius;
    area = PI * radius * radius;
    printf("Your basic pizza parameters are as follows:\n");
    printf("circumferece = %1.2f, area = %1.2f\n", circum, area);

    return 0;

}