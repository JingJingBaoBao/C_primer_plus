#include <stdio.h>
int main(void)
{
    int urn[5] = {100, 200, 300, 400, 500};
    int* ptr1 = urn;
    int* ptr2 = &urn[2];

    printf("&ptr1 = %p\n", &ptr1);
    ptr1++;
    printf("&ptr1 = %p\n", &ptr1);

    ptr1--;
    printf("ptr2 - ptr1 = %td\n", ptr2 - ptr1);

    return 0;
}