#include <stdio.h>
void pound(int n);

int main(void)
{
    int times = 5;
    char ch = '!';
    float fl = 6.0;
    pound(times);
    pound(ch);
    pound(fl);

    return 0;

}

void pound(int n)
{
    while (n-- > 0)
    {
        printf("#");
    }
    printf("\n");
}