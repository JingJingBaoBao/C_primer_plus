#include <stdio.h>

#define PRAISE "You are an extraodinary being."
int main(void)
{
    char name[5];

    printf("What's your name? ");
    scanf("%s", name);
    printf("Hello, %s. %s\n", name, PRAISE);

    return 0;
}