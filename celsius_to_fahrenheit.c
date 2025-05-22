#include <stdio.h>

// Ce programme convertit une température de Celsius vers Fahrenheit
int main() {
    float celsius, fahrenheit;

    // Lecture de la température en Celsius
    scanf("%f", &celsius);

    // Conversion Celsius → Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Affichage du résultat
    printf("%.1f°C équivaut à %.1f°F\n", celsius, fahrenheit);
    return 0;
}
