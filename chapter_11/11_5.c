#include <stdio.h>
#define STLEN 81

int main(void)
{
    char words[STLEN];

    puts("enter a string.");
    gets(words);
    printf("Your string twice\n");
    printf("%s\n", words);
    puts(words);

    return 0;
}