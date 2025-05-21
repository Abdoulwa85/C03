#include <stdio.h>
// Ce programme permet de lire trois entiers et afficher le plus grand
int main() {
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if (a >= b && a >= c)
printf("Le plus grand nombre est : %d\n", a);
else if (b >= a && b >= c)
printf("Le plus grand nombre est : %d\n", b);
else 
printf("Le plus grand nombre est : %d\n");
return 0;
}
