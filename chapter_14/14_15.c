#include <stdio.h>
#include <stdbool.h>
#include <string.h>
char * s_gets(char * st, int n);
enum spectrum {red, orange, yellow, green, blue, violate};
const char * colors[] = {"red", "orange", "yellow", "green","blue", "violate"};
#define LEN 30

int main(void)
{
    char choice[LEN];
    enum spectrum color;
    bool color_is_found;
    puts("Enter a color");
    while (s_gets(choice, LEN) != NULL && choice[0] != '\0') {
        for (color = red; color <= violate; color++) {
            if (strcmp(choice, colors[color]) == 0) {
                color_is_found = true;
                break;
            }
        }
        if (color_is_found) {
            switch (color) {
                case red : puts("red");
                    break;
                case orange : puts("org");
                    break;
            }
        }
        else {
            puts("error color");
        }
        color_is_found = false;
        puts("next color");
    }

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    char * find;
    ret_val = fgets(st, n, stdin);
    if (ret_val) {
        find = strchr(ret_val, '\n');
        if (find) {
            *find = '\0';
        }
        else {
            while (getchar() != '\n') {
                continue;
            }
        }
    }
    return ret_val;
}