

#include <stdio.h>

int main() {
    char caractere;
    
    printf("Veuillez saisir un caractere : ");
    scanf("%c", &caractere);

    if (caractere >= 'a' && caractere <= 'z') {
        printf("Le caractere saisi est une lettre minuscule.\n");
    }

    else if (caractere >= 'A' && caractere <= 'Z') {
        printf("Le caractere saisi est une lettre majuscule.\n");
    }
    
    else if (caractere >= '0' && caractere <= '9') {
        printf("Le caractere saisi est un chiffre.\n");
    }
    
    else {
        printf("Le caractere saisi est un caractere special.\n");
    }

    return 0;
}