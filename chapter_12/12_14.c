#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double *ptd;
    int max;
    int number;
    int i = 0;
    puts("What is the max number of type double entries?");
    if (scanf("%d", &max) != 1) {
        puts("Number not correctly entered bye");
        exit(EXIT_FAILURE);
    }
    ptd = (double *) malloc(max * sizeof(double));
    if (ptd == NULL) {
        puts("Memory allocation failed. Bye");
        exit(EXIT_FAILURE);
    }
    puts("Enter the value, q to quit");
    while (i < max && scanf("%lf", &ptd[i]) == 1) {
        ++i;
    }
    printf("here are your %d entries\n", number = i);
    for (i = 0; i < number; i++) {
        printf("%7.2f", ptd[i]);
        if (i % 7 == 6) {
            putchar('\n');
        }
    }
    if (i % 7 != 0) {
        putchar('\n');
    }
    puts("done");
    free(ptd);

    return 0;
}
