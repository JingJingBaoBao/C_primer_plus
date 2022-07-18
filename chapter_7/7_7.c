#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#define STOP '|'

int main(void)
{
    char c;
    char prev;
    long n_chars = 0L;
    int n_lines = 0;
    int n_word = 0;
    int p_lines = 0;
    bool in_world = false;

    printf("Enter next to be analyzed (| to terminate):\n");
    prev = '\n';
    while ((c = getchar()) != STOP) {
        n_chars++;
        if (c == '\n') {
            n_lines++; 
        }
        if (!isspace(c) && !in_world) {
            in_world = true;
            n_word++;
        }
        if (isspace(c) && in_world) {
            in_world = false;
        }
        prev = c;
    }

    if (prev != '\n') {
        p_lines = 1;
    }
    printf("characters = %ld, words = %d, lines = %d, ", n_chars, n_word, n_lines);
    printf("partical lines = %d\n", p_lines);

    return 0;
}