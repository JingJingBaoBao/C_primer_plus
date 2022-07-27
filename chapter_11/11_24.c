#include <stdio.h>
#include <string.h>
#define LISTSIZE 6
int main()
{   
    const char * list[LISTSIZE] = {
        "astronomy", "astounding",
        "astrophy", "ostreagg",
        "asterism", "astrophobia"
    };
    int count;
    for (int i = 0; i < LISTSIZE; i++) {
        if (strncmp(list[i], "astro", 5) == 0) {
            printf("found %s\n", list[i]);
            count++;
        }
    }
    printf("%d words beginning with astro.\n", count);

    return 0;
}