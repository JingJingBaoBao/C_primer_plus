#include <stdio.h>
#define NAME "SUNXUSHENG"
#define ADDRESS "BEIJING"
#define WIDTH 40
void starbar(void);

int main(void)
{
    starbar();
    printf("%s\n", NAME);
    printf("%s\n", ADDRESS);
    starbar();

    return 0;
}

void starbar(void)
{
    int count;
    for (count = 1; count <= WIDTH; count++) {
        putchar('*');
    }
    putchar('\n');
}