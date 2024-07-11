#include <stdio.h>
int fact_it(int n) {
    int result = 1;
    for(int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;}
int fact_re(int n) {
    if(n == 0) {
        return 1;
    } else {
        return( n * fact_re(n-1));
    }
}
int main() {
    int a;
    printf("Entrez un nombre entier positif : ");
    scanf("%d", &a);
   printf(" Le factorielle de %d calcule éde manieré iterative est : %d\n", a, fact_it(a));
    printf("Le factorielle de %d calcule de maniere recursive est : %d\n", a, fact_re(a));
    
    return 0 ;
}