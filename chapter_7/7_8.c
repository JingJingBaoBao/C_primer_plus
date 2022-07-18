#include <stdio.h>
#define COVERAGE 350
int main(void)
{
    int seq_feet;
    int cans;

    printf("Enter number of square feet to be painted:\n");
    while (scanf("%d", &seq_feet) == 1) {
        cans = seq_feet / COVERAGE;
        cans += (seq_feet % COVERAGE == 0) ? 0 : 1;
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("q to quit\n");
    }

    return 0;
}