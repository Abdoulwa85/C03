#include <stdio.h>

// Ce programme inverse les chiffres d’un nombre entier
int main() {
    int n, reversed = 0;

    // Lecture du nombre
    scanf("%d", &n);

    // Inversion du nombre
    while (n != 0) {
        reversed = reversed * 10 + n % 10;  // Ajoute le dernier chiffre
        n /= 10;  // Supprime le dernier chiffre
    }

    // Affichage du nombre inversé
    printf("Nombre inversé : %d\n", reversed);
    return 0;
}
