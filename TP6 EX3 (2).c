#include <stdio.h>
#include <string.h>

int main() {
    char mot[100];
    int longeur, i;
    int Pali = 1; 

    printf("Entrez un mot : ");
    scanf("%s", mot);

    longeur = strlen(mot);

    for(i = 0; i < longeur/2; i++) {
        if(mot[i] != mot[longeur - i - 1]) {
            Pali = 0; 
            break;
        }
    }

    if(Pali) {
        printf("%s est un pali.\n", mot);
    } else {
        printf("%s n'est pas un pali.\n", mot);
    }

    return 0;
}