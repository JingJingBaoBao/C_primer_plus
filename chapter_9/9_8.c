#include <stdio.h>

void to_binary(unsigned long n);

int main(void)
{
    unsigned long number;
    printf("Enter an int (q to quit):\n");
    while (scanf("%ld", &number) == 1) {
        printf("Binary: ");
        to_binary(number);
        putchar('\n');
        printf("enter an int: ");
    }

    return 0;
}

void to_binary(unsigned long n)
{
    int r;

    r = n % 2;
    if (n >= 2) {
        to_binary(n / 2);
    }
    putchar(r == 0 ? '0' : '1');
}