#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 10
void showarray(const int ar[], int n);
_Static_assert(sizeof(double) == 2*sizeof(int), "double not twice int size");

int main(void)
{
    int values[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int target[SIZE];
    double curious[SIZE / 2] = {2.0, 2.0e5, 2.0e10, 2.0e20, 5.0e30};
    puts("memcpy() used:");
    showarray(values, SIZE);
    memcpy(target, values, SIZE * sizeof(int));
    puts("target list");
    showarray(target, SIZE);

    puts("\nUsing memmove()");
    memmove(values+2, values, 5 * sizeof(int));
    puts("values -- elements 0-4 copied to 2 - 6");
    showarray(values, SIZE);

    puts("\nusing memcpy() to copy double to int");
    memcpy(target, curious, (SIZE / 2) * sizeof(double));
    puts("target -- 5 doubles into 10 int position");
    showarray(target, SIZE / 2);
    showarray(target+5, SIZE / 2);

    return 0;
}

void showarray(const int ar[], int n)
{
    int i;
    for (i = 0; i < n; i++) {
        printf("%d ", ar[i]);
    }
    putchar('\n');
}