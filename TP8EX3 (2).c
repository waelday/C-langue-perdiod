#include <stdio.h>
int main() {
    int i;
    int *p;
    i =5;
    p = &i;
    printf("La valeur de i est : %d\n", i);
    *p +=2;
    printf("La nouvelle valeur de i est : %d\n", i);

    return 0;
}