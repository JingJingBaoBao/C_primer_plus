#include <stdio.h>
#define XNAME(n) x ## n
#define PRINT_XN(n) printf("x" #n " = %d\n", x ## n)

int main(void)
{
    int XNAME(1) = 14;
    int x3 = 20;

    PRINT_XN(1);
    PRINT_XN(3);

    return 0;
}