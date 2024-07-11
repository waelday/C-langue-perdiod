#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    char *d, *f;
    int pal = 1; 
    printf("donnez une chaine : ");
    gets(ch);
    d = ch;
    f = ch + strlen(ch) - 1;
    while (d < f) {
        if (*d != *f) {
            pal = 0; 
            break; 
        }
        d++;
        f--;
    }
    if (pal == 1) {
        printf("la chaine \"%s\" est un palindrome.\n", ch);
    } else {
        printf("la chaine \"%s\" n'est pas un palindrome.\n", ch);
    }
    return 0;
}
