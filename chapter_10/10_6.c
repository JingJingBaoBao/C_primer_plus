#include <stdio.h>
#define SIZE 4

int main(void)
{
    int value1 = 44;
    int arr[SIZE];
    int value2 = 88;
    printf("v1 = %d v2 = %d\n", value1, value2);
    for (int i = -1; i <= SIZE; i++) {
        arr[i] = 2 * i + 1;
    }
    for (int i = -1; i < 7; i++) {
        printf("%2d %d\n", i, arr[i]);
    }
    printf("v1 = %d v2 = %d\n", value1, value2);
    printf("address of arr[-1]: %p\n", &arr[-1]);
    printf("address of arr[4]: %p\n", &arr[4]);
    printf("address of v1: %p\n", &value1);
    printf("address of v2: %p\n", &value2);

    return 0;
}