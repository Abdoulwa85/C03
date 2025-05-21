#include <stdio.h>
// Ce programme permet de compter combien de chiffres contient un entier
int main() {
int n, count = 0;
scanf("%d", &n);
if (n == 0)
count = 1;
else {
while (n != 0) {
n /= 10;
count++;
}
}
printf("%d contient %d chiffre(s).\n", n, count);
return 0;
}
