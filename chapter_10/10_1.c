#include <stdio.h>
#define MONTH 3

int main(void)
{
    int days[MONTH] = {31, 28, 31};
    int index;

    for (index = 0; index < MONTH; index++) {
        printf("Month %d have %d days\n", index+1, days[index]);
    }

    return 0;
}