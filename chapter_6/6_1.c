#include <stdio.h>
int main(void)
{
    long num;
    long sum = 0l;
    int status;

    printf("Please enter an integer to be summed ");
    printf("(q to quit)");
    status = scanf("%ld", &num);
    while (status == 1)
    {
        sum = sum + num;
        printf("please enter next number to sum (q to quit)");
        status = scanf("%ld", &num);
    }
    printf("The sum = %ld\n", sum);

    return 0;
}