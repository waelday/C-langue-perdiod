#include <stdio.h>

void hanoi(int n, char source, char target, char auxiliary) {
    if (n == 1) {
        printf("Déplacer un disque de %c vers %c\n", source, target);
        return;
    }
    hanoi(n-1, source, auxiliary, target);
    printf("Déplacer un disque de %c vers %c\n", source, target);
    hanoi(n-1, auxiliary, target, source);
}

int main() {
    int n = 3;
    char source = 'A', target = 'B', auxiliary = 'C';
    hanoi(n, source, target, auxiliary);
    return 0;
}