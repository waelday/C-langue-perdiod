#include <stdio.h>
int estPre(int n) {
    if (n <= 1) {
        return 0;
    }
    for (int i = 2; i <= n/2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    
}

int main() {
    int A;
    printf( "saisir un nomb A ");
    scanf("%d", &A);
    
    printf("Les nomb pre inf a %d sont : ", A);
    for (int i = 2; i < A; i++) {
        if (estPre(i)) {
            printf("%d ", i);
        }
    }
    
}




  