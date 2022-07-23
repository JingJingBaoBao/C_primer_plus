#include <stdio.h>
#define MONTHS 3

int main(void)
{
    int days[MONTHS] = {31, 29, 31};
    for (int index = 0; index < MONTHS; index++) {
        printf("Month %d have %d days\n", index+1, *(days+index));
    }

    return 0;
}