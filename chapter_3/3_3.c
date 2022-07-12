#include <stdio.h>

int main(void)
{
    int x = 100;

    printf("dec = %d, octal = %o, hex = %x\n", x, x, x);
    // 8进制以0开头， 16进制以0x开头
    printf("dec = %d, octcal = %#o, hex = %#x\n", x, x, x);

    return 0;
}