#include <stdio.h>
int Saisie() {
    int N;
    do {
        printf(" saisir un entier N (5 < N <= 20) : ");
        scanf("%d", &N);
    } while (N <= 5 || N > 20);
    
    return N;
}
void Remplir(float V[], int N) {
    printf("Saisie des elements du tableau :\n");
    for (int i = 0; i < N; i++) {
        printf("Element %d : ", i+1);
        scanf("%f", &V[i]);
    }
}
float maxV(float V[], int N) {
    float max = V[0];
    for (int i = 1; i < N; i++) {
        if (V[i] > max) {
            max = V[i];
        }
    }
    return max;
}
void affich(float V[], int N) {
    printf("Tableau à l'envers :\n");
    for (int i = N-1; i >= 0; i--) {
        printf("%.2f ", V[i]);
    }
    printf("\n");
}

int main() {
    int N;
    N = Saisie();
    
    float T[N];
    Remplir(T, N);
    
    printf("Le maximum du tableau T est :\n", maxV(T, N));
    
    affich(T, N);
    
    return 0;
}