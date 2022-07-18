#include <stdio.h>

int main(void)
{
    float length, width;

    printf("enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1) {
        printf("Length  = %0.2f:\n", length);
        printf("Enter its width:\n ");
        if (scanf("%f", &width) != 1) {
            break;
        }
        printf("width = %0.2f\n", width);
        printf("Area = %0.2f\n", width * length);
        printf("enter\n");
    }
    printf("Done!\n");
    return 0;
}