#include <stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;
    do {
        printf("enter a number : \n");
        scanf("%d", &code_entered);
    } while (code_entered != secret_code);
    printf("Niu Bi!\n");

    return 0;
}