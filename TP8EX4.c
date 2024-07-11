#include <stdio.h>
#include <stdlib.h>

int main() {
    int *p;
    int t[] = {12, 23, 34, 45, 56, 67, 78, 89, 90};
    
    p = t;

    printf("%d\n", *p);         
    printf("%d\n", *p + 2);     
    printf("%d\n", *(p + 2));

    for(p = t; p < t + 9; p++)
        printf("%d\n", *p);     
    
    return 0;
}