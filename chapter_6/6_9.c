#include <stdio.h>

int main(void)
{   
    long num;
    long sum = 0L;
    _Bool input_is_good;

    printf("Please enter a int to be sumed ");
    printf("(q to quit)\n");
    input_is_good = (scanf("%ld", &num) == 1);
    while (input_is_good)
    {
        sum += num;
        printf("Please enter a int to be sumed ");
        printf("(q to quit)\n");
        input_is_good = (scanf("%ld", &num) == 1);
    }
    printf("sum = %ld\n", sum);
    return 0;
}