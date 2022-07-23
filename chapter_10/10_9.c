#include <stdio.h>
#define SIZE 3
int sum(int ar[], int n);
int sum2(int * start, int * end);
int main(void)
{
    int marbles[SIZE] = {2, 3, 5};
    long answer;
    answer = sum(marbles, SIZE);
    printf("sum = %ld, size of arr = %zd bytes\n", answer, sizeof marbles);
    long answer2;
    answer2 = sum2(marbles, marbles+SIZE);
    printf("answer 2 = %ld\n", answer2);
    return 0;
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;
    for (i = 0; i < n; i++)
    {
        total += ar[i];
    }
    printf("size of ar = %zd\n", sizeof ar);

    return total;
}

int sum2(int * start, int * end)
{
    int total = 0;
    while(start < end) {
        total += *start;
        start++;
    }
    return total;
}