#include <stdio.h>
int units = 0;
void critic(void);

int main(void)
{
    printf("How many pounds to a firkin of butter?\n");
    scanf("%d", &units);
    while (units != 56) {
        critic();
    }
    printf("You must have looker it up\n");
    
    return 0;
}

void critic(void)
{
    printf("No luck, my friend\n");
    scanf("%d", &units);
}