#include <stdio.h>
#include <string.h>
#define SIZE 80
char * s_get(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon[] = "s smell like old shoes.";
    puts("favo flowers?");
    if (s_get(flower, SIZE)) {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else {
        puts("end");
    }

    return 0;
}

char * s_get(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        while (st[i] != '\n' && st[i] != '\0') {
            i++;
        }
        if (st[i] == '\n') {
            st[i] = '\0';
        }
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}
