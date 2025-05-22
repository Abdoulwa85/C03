#include <stdio.h>

// Ce programme compte le nombre de chiffres d’un entier
int main() {
    int n, original, count = 0;

    // Lecture de l'entier
    scanf("%d", &n);
    original = n;  // Sauvegarde de la valeur originale

    if (n == 0) {
        count = 1;  // Cas spécial : 0 a 1 chiffre
    } else {
        // Boucle pour diviser par 10 jusqu’à ce qu’il reste 0
        while (n != 0) {
            n /= 10;
            count++;
        }
    }

    // Affichage du résultat
    printf("%d contient %d chiffre(s).\n", original, count);
    return 0;
}
