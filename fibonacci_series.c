#include <stdio.h>

int main() {
    int limit, a = 0, b = 1, next;

    scanf("%d", &limit);

    printf("Fibonacci : ");

    while (a <= limit) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }

    printf("\n");
    return 0;
}
