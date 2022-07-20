#include <stdio.h>
#include "hotel.h"

int menu(void)
{
    int code, status;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the desired hotel:\n");
    printf("1) FA           2)Hotel Oly\n");
    printf("3) Chertworthy  4)The s\n");
    printf("5) Q\n");
    printf("\n%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 ||
            (code < 1 || code > 5)) {
                if (status != 1) {
                    scanf("%*s");
                }
                printf("Enter an int fomr 1 - 5\n");
            }
    return code;
}

int getnights(void)
{
    int nights;
    printf("How many night do you want to PaPaPa");
    while (scanf("%d", &nights) != 1) {
        scanf("%*s");
    }
    printf("Enter a int\n");

    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (int n = 1; n <= nights; n++, factor *= DISCOUNT) {
        total += rate * factor;
    }
    printf("Total cost $%0.2f.\n", total);
}