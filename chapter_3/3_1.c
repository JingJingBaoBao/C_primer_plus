#include <stdio.h>

int main(void)
{
    float weight;
    float value;

    printf("Are you worth your weight ub platform?\n");
    printf("Let's check it out!\n");
    printf("Please enter your weight ub pounds : ");
    scanf("%f", &weight);

    value = 1700.00 * weight * 14.5853;
    printf("Your weight in platform is wotrh %.2f\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to matintain your value.\n");

    return 0;

}