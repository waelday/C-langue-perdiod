#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    char c;
    int l, i, nd=0;
    printf("Veuillez saisir une chaine de caracteres : ");
    scanf("%s", ch);
    printf("Veuillez saisir un caractere : ");
    scanf(" %c", &c);
    l = strlen(ch);
    for (i = 0; i < l; i++) {
        if (ch[i] == c) {
            nd++;
        }
    }
    printf("Le nombre d'occurrences du caractere %c dans la chaine est : %d\n", c, nd);

    return 0;
}
