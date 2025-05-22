#include <stdio.h>

// Ce programme affiche la série de Fibonacci jusqu’à une limite donnée
int main() {
    int limit, a = 0, b = 1, next;

    // Lecture de la valeur limite
    scanf("%d", &limit);

    printf("Fibonacci : ");

    // Affiche les termes de la suite tant qu'ils sont ≤ limite
    while (a <= limit) {
        printf("%d ", a);
        next = a + b;  // Calcul du terme suivant
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
