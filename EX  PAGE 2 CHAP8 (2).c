#include<stdio.h>

int main() {
    int n;
    int *p;

    n = 5;
    printf("%d\n", n);

    p = &n;
    printf("%d\n", *p);

    *p = 1;
    printf("%d\n", n);
    printf("%d\n", *p);

    return 0;
}