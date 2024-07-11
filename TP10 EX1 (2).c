#include<stdio.h>
#include<stdlib.h>

typedef struct cellule cellule;
struct cellule {
    int elem;
    struct cellule *suivant;
};
typedef cellule *liste;

int main() {
    liste L,p;
    p = malloc(sizeof(cellule));
    p->elem = 15;
    p->suivant = NULL;
    L = p;
    printf("%d ", p->elem);
}