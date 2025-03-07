#include <stdio.h>

// copy input to output
int main()
{
    printf("EOF: %d\n", EOF);

    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    