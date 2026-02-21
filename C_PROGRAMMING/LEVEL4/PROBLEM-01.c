#include <stdio.h>

int main() {

    int x = 5;

A:
    printf("%d", x);
    x--;

    if (x > 0)
        goto A;

    printf("Done");

    return 0;
}