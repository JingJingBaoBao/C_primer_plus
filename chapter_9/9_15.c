#include <stdio.h>
void interchange(int* u, int* v);

int main(void)
{
    int x = 5, y = 10;
    printf("Ori x = %d y = %d\n", x, y);
    interchange(&x, &y);
    printf("Now x = %d y = %d\n", x, y);
    return 0;
}

void interchange(int* u, int* v)
{
    int temp = *u;
    *u = *v;
    *v = temp;

}