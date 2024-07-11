#include <stdio.h>

int main() {
    int *k, l; 

    l = 5;

    k = &l;

    printf("%d\n", l);

*k = 2;

    printf("%d\n", l);

    return 0;
}