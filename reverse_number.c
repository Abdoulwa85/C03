#include <stdio.h>
// Ce programme permet d'inverser les chiffres d'un entier
int main() {
int n, reversed = 0;
scanf("%d", &n);
while (n != 0) {
reversed = reversed * 10 + n % n;
n /= 10;
}
printf("Nombre inversé : %d\n", reversed);
return 0;
}
