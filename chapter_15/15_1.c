#include <stdio.h>
#include <limits.h>
char * itobs(int, char*);
void show_bstr(const char*);

int main(void)
{
    char bin_str[CHAR_BIT * sizeof(int) + 1];
    int num;

    puts("enter int");
    puts("non num to quit");
    while ((scanf("%d", &num)) == 1) {
        itobs(num, bin_str);
        printf("int = %d\n", num);
        show_bstr(bin_str);
        putchar('\n');
    }
    return 0;
}

char * itobs(int n, char * ps)
{
    int i;
    const static int size = CHAR_BIT * sizeof(int);
    for (i = size - 1; i >= 0; i--, n >>= 1) {
        //printf("%d %d\n",i, n);
        ps[i] = (01 & n) + '0';
    }
    ps[size] = '\0';
    return ps;
}

void show_bstr(const char * str)
{
    int i = 0;
    while (str[i]) {
        putchar(str[i]);
        if (++i % 4 == 0 && str[i]) {
            putchar(' ');
        } 
    }

}

