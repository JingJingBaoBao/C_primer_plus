#include <stdio.h>
#define LEN 20

struct names
{
    char first[LEN];
    char last[LEN];
};

struct guy
{
    struct names hindle;
    char favfood[LEN];
    char job[LEN];
    float income;
};

int main(void)
{
    struct guy fellow[2] = {
        {
            {"ewen", "villard"},
            "grilled salmon",
            "personality coach",
            68112.0
        },
        {
            {"rodney", "swillb"},
            "tripe",
            "tabloid",
            432400.0
        }
    };
    struct guy * him;
    printf("address of #1: %p #2: %p\n", &fellow[0], &fellow[1]);
    him = &fellow[0];
    printf("pointer #1: %p, #2 %p\n", him, him+1);
    printf("him->income is $%.2f: (*him).income is $%.2f\n", him->income, (*him).income);
    him++;
    printf("him->fav is %s him->hindle.last is %s\n", him->favfood, him->hindle.last);

    return 0;
}
