#include <stdio.h>
#include <string.h>

int main() {
    char phr[100];
    int nbMots = 0;

    printf("Entrez une phr : ");
    gets(phr);

    for (int i = 0; i < strlen(phr); i++) {
        if (phr[i] == ' ' || phr[i] == ' \t '|| phr[i] == '\n') {
            nbMots++;
        }
    }

    nbMots++; 

    printf("Le nombre de mots dans la phr est : %d\n", nbMots);

    return 0;
}
