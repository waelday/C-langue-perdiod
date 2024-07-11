#include <stdio.h>
#include <string.h>

int main() {
    char ch[100];
    printf("Entrez une ch de caractere  ");
    scanf("%s",&ch);
    for(int i = 0; i < strlen(ch); i++) {
        if(ch[i] >= 'a' && ch[i] <= 'z') {
            ch[i] = ch[i] - 32;
        }
    }
    printf("La ch en majuscules est : %s\n", ch);

    return 0;
}