#include <stdio.h>

int main(void)
{
    printf("Tye int has a size of %zd bytes.\n", sizeof(int));
    printf("Tye float has a size of %zd bytes.\n", sizeof(float));
    printf("Tye char has a size of %zd bytes.\n", sizeof(char));
    printf("Tye long has a size of %zd bytes.\n", sizeof(long));
    printf("Tye long long has a size of %zd bytes.\n", sizeof(long long));
    printf("Tye double has a size of %zd bytes.\n", sizeof(double));
    printf("Tye long double has a size of %zd bytes.\n", sizeof(long double));

    return 0;
}