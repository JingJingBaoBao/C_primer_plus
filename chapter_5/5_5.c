#include <stdio.h>
#define SQUARE 64

int main(void)
{
    const double CROP = 2E16;
    double current, total;
    int count = 1;

    printf("square  qrains  total   ");
    printf("fraction of \n");
    printf("        add     grains  ");
    printf("world total \n");
    total = current = 1.0;
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    while (count < SQUARE)
    {
        count += 1;
        current = 2 * current;
        total += current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

    }
    printf("That's all.\n");

    return 0;
}