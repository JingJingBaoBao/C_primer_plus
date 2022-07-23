#include <stdio.h>
#define SIZE 4
int sump(int * start, int * end);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 10};
    long answer;

    answer = sump(marbles, marbles + SIZE);
    printf("The total number of marbles is %ld\n", answer);

    return 0;
}

int sump(int * start, int * end)
{
    int total = 0;
    while (start < end) {
        total += *start;
        start++;
    }

    return total;
}