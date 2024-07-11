#include<stdio.h>

int main() {
    int A, B, temp;

    printf("Saisir deux nombres :\n");
    scanf("%d", &A);
    scanf("%d", &B);

    printf("A: %d\n", A);
    printf("B: %d\n", B);

    temp = A;
    A = B;
    B = temp;

    printf("La nouvelle valeur de A est %d\n", A);
    printf("La nouvelle valeur de B est %d\n", B);

    return 0;
}

