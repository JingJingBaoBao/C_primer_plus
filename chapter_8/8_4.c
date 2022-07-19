#include <stdio.h>

int main(void)
{   
    int guess = 1;

    printf("Pick an int from 1 to 100\n");
    printf("print y and n\n");
    printf("is %d?\n", guess);
    while (getchar() != 'y') {
        printf("%d?\n", guess++);
    }
    printf("Done\n");

    return 0;
}