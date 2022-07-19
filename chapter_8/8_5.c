#include <stdio.h>
void display(char ch, int lines, int width);

int main(void)
{
    int ch;
    int rows, cols;
    printf("Enter a char and teo int\n");
    while ((ch = getchar()) != '\n') {
        scanf("%d %d", &rows, &cols);
        display(ch, rows, cols);
        printf("continue enter\n");
        printf("Enter a new line to quit\n");
    }
    printf("Done\n");

    return 0;
}

void display(char ch, int lines, int width)
{
    int row, col;
    for (row = 1; row <= lines; row++) {
        for (col = 1; col <= width; col++) {
            putchar(ch);
        }
        printf("\n");
    }

}